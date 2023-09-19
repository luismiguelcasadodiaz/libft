/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:54 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/19 19:45:28 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* The ft_memmove() function copies len bytes from string src to string dst.  */
/* The two strings may overlap; the copy is always done in a non-destructive  */
/* manner.                                                                    */
/*                                                                            */
/* RETURN VALUES                                                              */
/* The function returns the original value of dst (the pointer)               */
/*                                                                            */
/* EXAMPLES: &dst < &src                                                      */
/*  memmove("Luis", "Miguel", 8) ==> "Miguel"                                 */
/*  memmove("Luis", "Miguel", 7) ==> "Miguel"                                 */
/*  memmove("Luis", "Miguel", 6) ==> "Migueliguel"                            */
/*  memmove("Luis", "Miguel", 5) ==> "MigueMiguel"                            */
/*  memmove("Luis", "Miguel", 4) ==> "Migu"                                   */
/*  memmove("Luis", "Miguel", 3) ==> "Migs"                                   */
/*  memmove("Luis", "Miguel", 2) ==> "Miis"                                   */
/*  memmove("Luis", "Miguel", 1) ==> "Muis"                                   */
/*  memmove("Luis", "Miguel", 0) ==> "Luis"                                   */
/* EXAMPLES: &dst > &src                                                      */
/*  memmove("Miguel", "Luis", 8) ==> "Luis"                                   */
/*  memmove("Miguel", "Luis", 7) ==> "Luis"                                   */
/*  memmove("Miguel", "Luis", 6) ==> "Luis"                                   */
/*  memmove("Miguel", "Luis", 5) ==> "Luis"                                   */
/*  memmove("Miguel", "Luis", 4) ==> "Luisel"                                 */
/*  memmove("Miguel", "Luis", 3) ==> "Luiuel                                  */
/*  memmove("Miguel", "Luis", 2) ==> "Luguel"                                 */
/*  memmove("Miguel", "Luis", 1) ==> "Liguel"                                 */
/*  memmove("Miguel", "Luis", 0) ==> "Miguel"                                 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;
	size_t			idx;
	size_t			max;

	if (len)
	{
		max = ft_strlen(src);
		uc_dst = (unsigned char *)dst;
		uc_src = (unsigned char *)src;
		idx = 0;
		while (idx <= max && idx < len)
		{
			uc_dst[idx] = uc_src[idx];
			idx++;
		}
	}
	return (dst);
}
