#include <iostream>

int	main(int ac, char **av)
{
	(void)ac;
	char	buff[512];
	int		i;
	int		j;

	j = 1;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(ac > 1 && av[j])
	{
		i = 0;
		while(av[j][i])
		{
			if (av[j][i] >= 'a' && av[j][i] <= 'z')
				av[j][i] = av[j][i] - 32;
			std::cout << av[j][i];
			i++;
		}
		std::cout << " ";
		j++;
	}
	std::cout << std::endl;
	return (0);
}
