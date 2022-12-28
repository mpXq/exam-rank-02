#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0, size = 0, tmp = 1, x = 0;
	if (argv[1])
	{
		while (argv[1][i])
		{
			while (argv[1][i] &&argv[1][i] == ' ')
				i++;
			while (argv[1][i] && argv[1][i] != ' ')
			{
				if (tmp != size)
					size++;
				i++;
			}
			if (tmp == size)
				tmp++;
		}
		char c[size][1000000];
		i = 0;
			while (argv[1][i] && argv[1][i] == ' ')
				i++;
			while (argv[1][i] && argv[1][i] != ' ')
				c[size - 1][x++] = argv[1][i++];
		int y = 0;
		while (argv[1][i])
		{
			x = 0;
			while (argv[1][i] && argv[1][i] == ' ')
				i++;
			while (argv[1][i] && argv[1][i] != ' ')
				c[y][x++] = argv[1][i++];
			y++;
		}
		int l = 0, ll = 0;
		while (l < size)
		{
			while (c[l][ll])
				write(1, &c[l][ll++], 1);
			l++;
			if (l < size)
				write(1 , " ", 1);
			ll = 0;
		}
	}
	write(1, "\n", 1);
}
