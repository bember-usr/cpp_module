#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

std::string makeline(std::string &line, std::string s1, std::string s2)
{
	std::stringstream strs;
	size_t n;
	size_t len(s1.length());

	for (size_t i = 0; i < line.length(); i++)
	{
		n = 0;
		while (line[i + n] == s1[n] && n < len)
			n++;
		if (n == len)
		{
			strs << s2;
			i += (n - 1);
		}
		else
			strs << line[i];
	}
	return (strs.str());
}

int errors(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file;

	if (filename.length() == 0)
	{
		std::cout << "Filename cannot be empty" << std::endl;
		return (1);
	}
	file.open(filename);
	if (!s1.length())
	{
		std::cout << "String 1 cannot be empty" << std::endl;
		return (1);
	}
	if (!s2.length())
	{
		std::cout << "String2 cannot be empty" << std::endl;
		return (1);
	}
	if (!file.is_open())
	{
		std::cout << "File does not exist or could not be opened" << std::endl;
		return (1);
	}
	file.close();
}

int setup(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file;
	std::ofstream newfile;
	std::string line;

	if (errors(filename,s1,s2))
		return (1);
	file.open(filename);
	newfile.open(filename + ".replace", std::ios::trunc);
	if (!newfile.is_open())
		throw "Could not create .replace file ";
	while (std::getline(file, line))
		newfile << makeline(line, s1, s2);
	newfile.close();
	file.close();
	return (0);
}


int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Invalid number of arguments" << std::endl;
	else
		return (setup(argv[1], argv[2], argv[3]));
	return (1);
}