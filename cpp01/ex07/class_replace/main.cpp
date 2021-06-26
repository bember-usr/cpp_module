#include <iostream>
#include <fstream>
#include <string>

int write_to_file(int ac, char **av)
{
	std::ifstream readFile;//чтение из файла
	std::ofstream writeFile;
	std::string filename = av[1];
	std::string line;
	std::string::size_type idx = 0;

	if (av[2] == nullptr || av[3] == nullptr)
	{
		std::cout<< "input string empty error!\n";
		return (1);
	}
	std::string s1(av[2]);
	std::string s2(av[3]);
	readFile.open(filename.c_str());
	if (readFile.is_open() == false)
	{
		std::cout<< "open file error!\n";
		return (1);
	}
	writeFile.open(filename + ".replace");
	if (readFile.is_open())
	{
		std::cout << "FILE OPEN";
		while (std::getline(readFile, line))
		{
			while ((idx = line.find(s1)) != std::string::npos)
			{
				line.replace(idx, s1.length(), s2);
				idx += s2.length();
			}
			writeFile<<line<<std::endl;
		}
	}
	readFile.close();
	writeFile.close();
	return (0);
}

int main(int argc, char **argv)
{
	if (argc !=4)
	{
		std::cout<<"wrong input file!\n";
		return (1);
	}
	else
		if (write_to_file(argc, argv))
			return (1);
	return (0);
}