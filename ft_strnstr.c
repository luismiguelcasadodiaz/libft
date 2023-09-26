/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:54 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/26 19:33:53 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* The ft_strnstr() function locates the first occurrence of the null-term    */
/* string little in the string big, where not more than len characters are	  */
/* searched. Characters that appear after a `\0' character are not  searched. */
/*                                                                            */
/* GETS                                                                       */
/*  big: a null-terminated string where to find the 'lit'  substr.            */
/*  lit: a null-terminated string to find inside 'big'.                       */
/*  len: the max num of chars of 'big' to start the search of 'lit'           */
/*                                                                            */
/* RETURNS                                                                    */
/*  'big' when 'lit'  equals ""'                                              */
/*  NULL  when 'lit' does not occur in 'big'.                                 */
/*  a pointer to the first char of 'big' where starts the first 'lit'         */
/*                                                                            */
/* OPERATION                                                                  */
/*  Loops big till either finds a match or max_idx                            */
/*                                                                            */

/* max_idx() is a helper function, that calculates the last position to start */
/* a match verification.                                                      */
/* It is useless start a match verification in big when the remainder string  */
/* is smaller than little.                                                    */
/* Also is useless to start a match verification after len chars verified     */

static size_t	max_idx(size_t big_len, size_t lit_len, size_t len)
{
	size_t	last_idx_big;

	last_idx_big = 0;
	if (lit_len < big_len)
		last_idx_big = big_len - lit_len;
	if (last_idx_big <= len)
		return (last_idx_big);
	else
		return (len);
}

static char	*my_find(const char	*b, const char *l, size_t ll, size_t len)
{
	size_t	i_big;
	size_t	i_lit;
	size_t	i_big_max;
	short	found;

	i_big_max = max_idx(ft_strlen(b), ll, len);
	i_big = 0;
	found = 0;
	while (!found && (i_big <= i_big_max))
	{
		found = 1;
		i_lit = 0;
		while (found && (l[i_lit] != '\0'))
		{
			found = (b[i_big + i_lit] == l[i_lit]);
			i_lit++;
		}
		i_big++;
	}
	if (found)
		return ((char *)(b + (--i_big)));
	else
		return ((void *)0);
}

char	*ft_strnstr(const char	*big, const char *lit, size_t len)
{
	char	*result;
	size_t	lit_len;

	if (len == 0)
		return (NULL);
	if ((big[0] != '\0') && (len > 0)) 
	{
		lit_len = ft_strlen(lit);
		if (len >= lit_len)
			result = my_find(big, lit, lit_len, len);
		else
			result = NULL;
	}
	else
		result = (char *)(big);
	return (result);
}
