#include <unistd.h>

void	ft_putchar(char c);

void	validate(int x, int y, int a, int b)
{
	if ((a == 1 && b == 1) || ((a == x && b == y) && (b != 1) && (a != 1)))
	{
		ft_putchar('/');
	}
	else if ((a == 1 && b == y) || ((a == x && b == 1)))
	{
		ft_putchar('\\');
	}
	else if ((a == 1) || (b == 1) || (a == x) || (b == y))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	b;
	int	a;

	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			validate(x, y, a, b);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
