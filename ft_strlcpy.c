/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:54 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/25 11:09:52 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ft_strlcpy copy the input string into a destination string.                */
/* If the destination buffer, limited by its size, isn't large enough to hold */
/* the copy, the resulting  string  is  truncated  (but  it  is  guaranteed   */
/* to be null-terminated).                                                    */
/*                                                                            */
/* They return the length of the total string they tried to create.           */
/* GETS                                                                       */
/*  dst a pointer to a buffer                                                 */
/*  src a pointer to a null-terminates string                                 */
/*  sz the buffer size to copy src into.                                      */
/*                                                                            */
/* RETURNS:                                                                   */
/*  size of src. regardless of how many characteres has been copied           */
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
size_t	ft_strlcpy(char *dst, const char *src, size_t sz)
{
	size_t	src_len;
	size_t	idx;

	src_len = ft_strlen(src);
	idx = 0;
	while (idx <= src_len && idx < sz)
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[++idx] = '\0';
	return (src_len);
}
