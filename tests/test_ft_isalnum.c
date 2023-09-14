#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	int	c;

	c = 48;
	while (c <= 57)
	{
		printf(" %d, %d\n", c, (isalnum(c) != 0) && (ft_isalnum(c) != 0));
		c++;
	}
	c = 65;
	while (c <= 90)
	{
		printf(" %d, %d\n", c, (isalnum(c) != 0) && (ft_isalnum(c) != 0));
		c++;
	}
	c = 97;
	while (c <= 122)
	{
		printf(" %d, %d\n", c, (isalnum(c) != 0) && (ft_isalnum(c) != 0));
		c++;
	}
	return (0);
}
