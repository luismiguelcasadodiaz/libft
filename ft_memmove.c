/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:54 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/27 20:19:32 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* this function helps me to pass paco test as he wants a gesfault when big   */
/* is null                                                                    */
/* 
static void	force_segfault(void)
{
	int	*p;
	p = NULL;
	*p = 1;
}
*/
/* The ft_memmove() function copies len bytes from string src to string dst.  */
/* The two strings may overlap; the copy is always done in a non-destructive  */
/* manner.                                                                    */
/*                                                                            */
/* GETS                                                                       */
/* dst : starting memory address to move bytes to                             */
/* src : starting memory address to move bytes from                           */
/* len : numbers of bytes to move                                             */
/*                                                                            */
/* RETURN VALUES                                                              */
/* The function returns the original value of dst (the pointer)               */
/*                                                                            */
/* OPERATION                                                                  */
/*  programmer mindset ==> forget strings exists. think in bytes              */
/*                                                                            */
/*  lower memory                                                higher memory */
/* 0........................................................................n */
/*  case  A:  dst < src                                                       */
/*  case A1:  dst + len < src                                                 */
/*      dst   ............                                                    */
/*                                          src ...............               */
/*          ft_memcpy (dst, src, len)                                         */
/*                                                                            */
/*  case A2:  dst + len >= src                                                */
/*      dst   ............                                                    */
/*                 src ...............                                        */
/*          ft_memcpy (dst, src, src - dst)                                   */
/*                                                                            */
/*                                                                            */
/*  case  B:  dst > src                                                       */
/*  case B1:  src + len < dst                                                 */
/*      src   ............                                                    */
/*                                          dst ...............               */
/*          ft_memcpy (dst, src, len)                                         */
/*                                                                            */
/*  case B2:  src + len > dst                                                 */
/*      src   ............                                                    */
/*                 dst ...............                                        */
/*          ft_memcpy (dst, src, dst - src)                                   */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	//if ((dst == NULL) || (src == NULL))
	//	force_segfault();
	if (dst < src)
	{
		if ((dst + len) >= src)
			len = src - dst;
	}
	else if (dst > src)
	{
		if ((src + len) >= dst)
			len = dst - src;
	}
	return (ft_memcpy(dst, src, len));
}
