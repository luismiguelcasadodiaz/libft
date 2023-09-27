/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:55 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/27 16:52:07 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*                                                                            */
/* ft_substr() returns a substring from the string ’s’. The substring begins  */
/* at index ’start’ and is of maximum size ’len’.                             */
/*                                                                            */
/*                                                                            */
/* GETS                                                                       */
/*  s: The string from which to create the substring.                         */
/*  start: The start index of the substring in the string ’s’.                */
/*  len: The maximum length of the substring.                                 */
/*                                                                            */
/* RETURNS                                                                    */
/* The substring or NULL if the allocation fails.                             */
/*                                                                            */
/* OPERATION                                                                  */
/*  calculate substring size wiht starting point and num chars to extract.    */
/*  When start + num chars to extract is bigger than string size, subs'size   */
/*  must be string size minus starting point                                  */
/*                                                                            */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_sub;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start + len > s_len)
		len = s_len - start;
	s_sub = (char *)malloc(len + 1);
	if (s_sub != NULL)
		s_sub = (char *)ft_memcpy(s_sub, (s + start), len);
	return (s_sub);
}
