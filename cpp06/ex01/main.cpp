#include <ctime>
#include <string>
#include <cstdlib>
#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void)
{
	static std::string alp = "0123456789" \
		"abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";
	static size_t alpLen = alp.length();
	char *raw;
	raw = new char[20];
	for (int i = 0; i < 8; i++)
	{
		raw[i] = alp[rand() % alpLen];
		std::cout << raw[i];
	}
	std::cout << (*reinterpret_cast<int*>(raw + 8) = rand() % 424242);
	for (int i = 0; i < 8; i++)
	{
		raw[i + 12] = alp[rand() % alpLen];
		std::cout << raw[i];
	}
	std::cout << std::endl;
	return (raw);
}

Data *deserialize(void *raw)
{
	Data *d = new Data;

	d->s1 = std::string(static_cast<char*>(raw), 8);
	d->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	d->s2 = std::string(static_cast<char*>(raw) + 12, 8);
	return (d);
}

int main(void)
{
	srand(time(nullptr));

	for (int i = 0; i < 5; i++)
	{
		std::cout << "test " << i << ": " << '\n';
		void *raw = serialize();
		std::cout << raw << std::endl;

		Data *dt = deserialize(raw);

		std::cout << "\tstr1: " << dt->s1 << '\n';
		std::cout << "\tn:    " << dt->n << '\n';
		std::cout << "\tstr2: " << dt->s2 << std::endl;
		std::cout << raw << std::endl;

		delete static_cast<char*>(raw);
		delete dt;
	}

	return (0);
}