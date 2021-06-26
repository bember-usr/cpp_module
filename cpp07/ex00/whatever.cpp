#include <iostream>

class Awesome {
private:
	int _n;
public:
	Awesome(int n): _n(n) {}
	bool operator==(Awesome const &rhs) { return (this->_n==rhs._n);}
	bool operator!=(Awesome const &rhs) { return (this->_n!=rhs._n);}
	bool operator<(Awesome const &rhs) { return (this->_n<rhs._n);}
	bool operator>(Awesome const &rhs) { return (this->_n>rhs._n);}
	bool operator>=(Awesome const &rhs) { return (this->_n>=rhs._n);}
	bool operator<=(Awesome const &rhs) { return (this->_n<=rhs._n);}

	int const &getInt() const { return (this->_n);}
};

std::ostream &operator<<(std::ostream &out, Awesome const &value)
{
	out << value.getInt();
	return (out);
}

template<typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T &min(T &a, T &b)
{
	if (b > a)
		return (a);
	return (b);
}

template<typename T>
T &max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

int main(void)
{
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	std::string e = "chaine3";
	std::string f = "chaine3";

	std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "f -> " << &f  << std::endl;
	std::cout << "min(e, f) = " << ::min(e, f) << " (" << &::min(e, f) << ")" << std::endl;
	std::cout << "max(e, f) = " << ::max(e, f) << " (" << &::max(e, f) << ")" << std::endl;

	std::cout << "________CLASS________" << std::endl;
	Awesome a2(2);
	Awesome b2(7);
	std::cout << "a2 = " << a2 << " b2 = " << b2  << std::endl;
	::swap(a2, b2);
	std::cout << "a2 = " << a2 << " b2 = " << b2  << std::endl;
	std::cout << "min(a2, b2) = " << ::min(a2, b2) << std::endl;
	std::cout << "max(a2, b2) = " << ::max(a2, b2) << std::endl;


	return (0);
}