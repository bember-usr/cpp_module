#include <fstream>
#include <iostream>
#include <string>

/*Наиболее часто применяются классы ifstream для чтения, 
ofstream для записи и fstream для модификации файлов.*/

int error(const char *str)
{
	std::cout << str << std::endl;
	return (1);
}

int err_args(int ac, char **av)
{
	std::fstream if_file_add;
	if (ac < 4)
	{
		if (!av[1])
			return (error("Need to file"));
		if (!av[2])
			return (error("Input string is empty"));
		if (!av[3])
			return (error("Input string is empty"));
	}
	if_file_add.open(av[1]);	//open создаёт файл, если не находит, если убрать проверку 
	if (if_file_add.fail())
		return (error("File not exist"));
	if_file_add.close();
	return (0);
}

int main(int ac, char **av)
{
	if (err_args(ac, av) == 1)
		return (1);

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2= av[3];

	std::ofstream file_w;	// запись в файл
	// file_w.open(filename, std::ofstream::app); чтобы не перезаписывать, а добавлять новые строки.
	file_w.open(filename.c_str());	// создаём объект класса ofstream для записи и связываем его с файлом
	file_w << s1 << std::endl;	// запись строки в файл с переводом каретки
	file_w << s2 << std::endl; 
	file_w.close();	// закрываем файл

	std::ifstream file_read;	//открываем файл для чтения
	file_read.open(filename.c_str());
	if (!file_read.is_open())
		return (error("Can't opened file"));

	std::ofstream file_replace;
	std::string line;
	std::string str = filename + ".replace";
	file_replace.open(str.c_str());	//создаём новый файл для записи
	if (file_replace.fail())
		return (error("Can't created file"));

	while (std::getline(file_read, line))
		file_replace << line << std::endl;	//запись в файл.replace

	file_replace.close();
	file_read.close();
	return (0);
}