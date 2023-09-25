/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:54 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/25 18:21:13 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* The ft_strnstr() function locates the first occurrence of the null-term    */
/* string little in the string big, where not more than len characters are	  */
/* searched. Characters that appear after a `\0' character are not  searched. */
/*                                                                            */
/* OPERATION                                                                  */
/*  Loops big till either finds a match or max_idx                            */
/*                                                                            */

/* max_idx() is a helper function, that calculates the last position to start */
/* a match verification.                                                      */
/* It is useless start a match verification in big when the remainder string  */
/* is smaller than little.                                                    */
/* Also is useless to start a match verification after len chars verified     */

size_t	max_idx(const char	*big, const char *lit, size_t len)
{
	size_t	big_len;
	size_t	lit_len;
	size_t	last_idx_big;

	big_len = ft_strlen(big);
	lit_len = ft_strlen(lit);
	last_idx_big = 0;
	if (lit_len < big_len)
		last_idx_big = big_len - lit_len;
	if (last_idx_big <= len)
		return (last_idx_big);
	else
		return (len);
}

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i_big;
	size_t	i_lit;
	short	found;
	size_t	i_big_max;

	i_big_max = max_idx(big, little, len);
	i_big = 0;
	found = 0;
	while (!found && (i_big <= i_big_max))
	{
		found = 1;
		i_lit = 0;
		while (found && (little[i_lit] != '\0'))
		{
			found = (big[i_big + i_lit] == little[i_lit]);
			i_lit++;
		}
		i_big++;
	}
	if (found)
		return ((char *)(big + --i_big));
	else
		return (NULL);
}
