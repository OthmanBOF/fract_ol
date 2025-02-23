#include <unistd.h>
int main (int ac, char **av)
{
	int	i;
	int s = 0;
	int non_true = 0;
	int f = 0;
	int digit = 0;

	i = 0;
	while (av[1][++i])
	{
		if ((av[1][i] == '-' || av[1][i] == '+') && i == 0)
			s = 1;
		else if (av[1][i] > '9' || av[1][i] < '0')
			non_true += 1;
		else if (av[1][i] == '.')
			f += 1;
		else
			digit++;
	}
	if (av[1][i - 1] == '.' ||s > 1 || non_true > 0 || f > 1 || digit < 1)
		write( 1,"err\n", 4);
	else
		write(1, "gg\n", 3);
}
