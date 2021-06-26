#include <iostream>
#include <cctype>

void	ft_print(char **av, int ac)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (ac > ++i)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			std::cout << (char)(std::toupper(av[i][j]));
			j++;
		}
	}
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		ft_print(av, ac);
	std::cout << std::endl;
	return (0);
}