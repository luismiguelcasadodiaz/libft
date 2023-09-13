#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	int	c;

	c = 65;
	while (65 <= c && c <= 90)
	{
		printf(" %d, %d\n", c, (isalpha(c) == ft_isalpha(c)));
		c++;
	}
	c = 97;
	while (97 <= c && c <= 122)
	{
		printf(" %d, %d\n", c, (isalpha(c) == ft_isalpha(c)));
		c++;
	}
	return (0);
}
