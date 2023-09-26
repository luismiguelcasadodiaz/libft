/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/26 19:43:19 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int	main(int argc, char **argv)
{
	char	*big;
	char	*lit;
	size_t	len;

	if (argc != 4)
		printf("Usage ./test_ft_strnstr big little len");
	else
	{
		len = (size_t)ft_atoi(argv[3]);
		big = argv[1];
		lit = argv[2];
		printf("big = >%s<, ", big);
		printf("mine >%s<\n", ft_strnstr(big, lit, len));
  		printf("yours  >%s<\n", strnstr(big, lit, len));
		printf("big = >%s<, ", big);
		printf("mine >%s<\n", ft_strnstr(big, lit, '\0'));
  		printf("yours  >%s<\n", strnstr(big, lit, '\0'));
	}
	return (0);
}
/*
		printf("big = >%s<, ", (char *)((void *)0));
		printf("mine >%s<, ", ft_strnstr((char *)((void *)0), *num));
		printf("yours  >%s<\n", strnstr((char *)((void *)0), *num));
		
Error in test 3: ft_strnstr(0x101f9cda0: "", "", 0): expected: 0x101f9cda0, yours: 0x0
Error in test 7: ft_strnstr(0x101f9cda0: "", "teste", 1): expected: 0x0, yours: 0x101f9cda0
Error in test 8: ft_strnstr(0x101f9cda0: "", "teste", 2): expected: 0x0, yours: 0x101f9cda0
Error in test 9: ft_strnstr(0x101f9b820: "teste", "", 0): expected: 0x101f9b820, yours: 0x0
Error in test 20: ft_strnstr(0x101f9b8e0: "aaxx", "xx", 2): expected: 0x0, yours:
0x101f9b8e2
Error in test 21: ft_strnstr(0x101f9b8e0: "aaxx", "xx", 3): expected: 0x0, yours:
0x101f9b8e2
Error in test 25: ft_strnstr(0x7ffeedc6e680: "", "xx", 4294967295): expected: 0x0, yours:
0x7ffeedc6e680


KO  26: 	 check(ft_strnstr(empty, "", 0) == empty); showLeaks();
KO  27: 	 check(ft_strnstr(empty, "coucou", -1) == 0); showLeaks();
KO  29: 	 check(ft_strnstr(empty, "12345", 5) == 0); showLeaks();
KO  31: 	 check(ft_strnstr(haystack, "cd", 8) == NULL); showLeaks();
KO  33: 	 check(ft_strnstr("1", "a", 1) == NULL); showLeaks();

Test 9:
    if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15)))
        ft_print_result("NULL");
    else
        ft_print_result(str);
Expected (cat -e test09.output):
NULL
Your result (cat -e user_output_test09):
dolor sit amet
*/
