/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:37:18 by luicasad          #+#    #+#             */
/*   Updated: 2023/10/10 00:18:34 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"


char my_toupper(unsigned int i, char c)
{
     if (i)
	{
	 if ('a' <= c && c <= 'z')
         return (c - 32);
     }
	 return (c);
 }

void	show_words(char	*words)
{
	if (words)
	{
		printf(">%s<\n", words);
	}
	else
		printf("Nothing to print\n");
}

int	main(int argc, char **argv)
{
	char			*src;
	char			*result;

	if (argc != 2)
		printf("Usage ./test_ft_strmapi str");
	else
	{
		src = argv[1];
		printf("src = >%s<, ", src);
		result = ft_strmapi(src, my_toupper);
		show_words(result);
		free(result);
	}
	return (0);
}
