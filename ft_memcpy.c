/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:54 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/19 15:30:10 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/* The memcpy() function copies n bytes from memory area src to memory area   */
/* dst.  If dst and src overlap, behavior is undefined.  Applications in      */
/*     which dst and src might overlap should use memmove(3) instead.         */
/*                                                                            */
/* ATTENTION: the difference wiht stdlib prototype comes from 42 subject      */
/* Some of the functions’ prototypes you have to redo use the ’restrict’      */
/* qualifier. This keyword is part of the c99 standard. It is therefore       */
/* forbidden to include it in your own prototypes and to compile your code    */
/* with the -std=c99 flag.                                                    */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;
	size_t			idx;

	if (n)
	{
		uc_dst = (unsigned char *)dst;
		uc_src = (unsigned char *)src;
		idx = 0;
		while (idx < n)
		{
			uc_dst[idx] = uc_src[idx];
			idx++;
		}
	}
	return (dst);
}
