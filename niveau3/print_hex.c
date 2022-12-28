#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0, y = 1, rep = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			y = -1;
	while (str[i] >= '0' && str[i] <= '9')
		rep = (rep * 10) + str[i++] - 48;
	return (rep * y);
}

void	putnbrb(int nb)
{
	char base[] = "0123456789abcdef";
	char c[1000000];
	int i = 0;

	if (nb == 0)
		write (1, "0", 1);
	while (nb != 0)
	{
		c[i++] = base[nb % 16];
		nb /= 16;
	}
	i--;
	while (c[i])
		write(1, &c[i--], 1);
}

int	main(int argc, char **argv)
{
	int i = -1, rep = 0;
	if (argv[1])
		putnbrb(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
