#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	int	c;

	c = 48;
	while ( c <= 58)
	{
		printf(" %d, %d\n", c, (isdigit(c) != 0) && (ft_isdigit(c) != 0) );
		c++;
	}
	return (0);
}
