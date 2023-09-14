#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	int	c;

	c = 0;
	while ( c <= 127)
	{
		printf(" %d, %d\n", c, (isascii(c) != 0) && (ft_isascii(c) != 0) );
		c++;
	}
	return (0);
}
