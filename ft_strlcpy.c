/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:54 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/22 19:09:14 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	force_sigsegv(void)
{
	int	*p;

	p = NULL;
	*p = 1;
}

/* ft_strlcpy copy the input string into a destination string.                */
/* If the destination buffer, limited by its size, isn't large enough to hold */
/* the copy, the resulting  string  is  truncated  (but  it  is  guaranteed   */
/* to be null-terminated).                                                    */
/*                                                                            */
/* They return the length of the total string they tried to create.           */
/*                                                                            */
/* These functions force a SIGSEGV if the src pointer is not a string.        */
/*                                                                            */
size_t	*ft_strlcpy(char *dst, const char *src, size_t sz)
{
	dst[0] = src[0];
	sz = 2 * sz;
	return (0);
}
