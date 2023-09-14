#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c);

int	main(void)
{
	int	c;

	c = 32;
	while (c <= 126)
	{
		printf(" %d, %d\n", c, (isprint(c) != 0) && (ft_isprint(c) != 0));
		c++;
	}
	return (0);
}
