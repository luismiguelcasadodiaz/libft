/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:54 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/25 11:51:29 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ft_strlcat concatenates the input string into a destination string.        */
/* If the destination buffer, limited by its size, isn't large enough to hold */
/* the src the resulting  string  is  truncated  (but  it  is  guaranteed     */
/* to be null-terminated).                                                    */
/*                                                                            */
/* They return the length of the total string they tried to create.           */
/* GETS                                                                       */
/*  dst a pointer to a buffer containing a null-terminated string             */
/*  src a pointer to a null-terminated string                                 */
/*  sz dst buffer'size to concatenate src with. (no dst string's len          */
/*                                                                            */
/* RETURNS:                                                                   */
/*  sz + lenght of src regardless of how many characteres has been copied.    */
/*  the idea behind this simplifies truncations detection                     */
/*                                                                            */
/* OPERATION:                                                                 */
/*  Loops till one of these 2 conditions                                      */
/*    1.- dst ends.                                                           */
/*    2.- src ends.                                                           */
/*                                                                            */
/*  NuLL-terminated dst                                                       */
/*                                                                            */
/* USAGE                                                                      */
/*  char	*path;                                                            */
/*  char	path[40];                                                         */
/*  ...                                                                       */
/*  path_len = ft_strlen(path); OR path_len = sizeof(path)                    */
/*  home_len = ft_strlcpy(path, home, path_len)                               */
/*  if (home_len > path_len)                                                  */
/*      return (ENAMETOOLONG);                                                */
/* INSPIRATION                                                                */
/*  https://gratisoft.us/todd/papers/strlcpy.html                             */
/*                                                                            */
size_t	ft_strlcat(char *dst, const char *src, size_t sz)
{
	size_t	src_len;
	size_t	src_idx;
	size_t	dst_len;
	size_t	dst_idx;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	dst_idx = dst_len;
	src_idx = 0;
	while (src_idx <= src_len && dst_idx < sz)
	{
		dst[dst_idx++] = src[src_idx++];
	}
	dst[++src_idx] = '\0';
	return (dst_len + src_len);
}
