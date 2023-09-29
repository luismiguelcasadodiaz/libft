/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:55 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/29 18:47:32 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ft_strtrim() allocates (with malloc(3)) and returns a copy of s with the   */
/* characters specified in ’set’ removed from the BEGINNING and the END of    */
/* the string. ft_strtrim() does not removed in the mmiddle of the string.    */
/*                                                                            */
/* GETS                                                                       */
/*  s: the strig to trim.                                                     */
/*  set: the reference set of chars to trim                                   */
/*                                                                            */
/* RETURNS                                                                    */
/*   the trimmed string or NULL if allocation fails                           */
/*                                                                            */
/* OPERATION                                                                  */
/*   Loops from the begining towards end skipping chars in set. When detects  */
/*   the first no-set-belonging char, keeps index in variable s_ini.          */
/*                                                                            */
/*   Loops from end towards the begining skipping chars in set. When detects  */
/*   the first no-set-belonging char, keeps index in variable s_end.          */
/*                                                                            */
/*   When (ft_strchr(set, s[s_ini]) != NULL) true it finds a removable char.  */
/*                                                                            */
/*   s_end - s_ini + 1 equals the num of chars to keep.                       */
/*                                                                            */
/*   Into the new allocated memory i copy trimmed part of s                   */
/*                                                                            */
/*  Null/terminate t and return it                                            */
/*                                                                            */
char	*ft_strtrim(char const *s, char const *set)
{
	size_t	s_len;
	size_t	s_ini;
	size_t	s_end;
	char	*t;

	if (!s || !set)
		return (NULL);
	if (s[0] == '\0' && set[0] == '\0')
	{
		t= (char *)malloc(sizeof(char));
		t[0] = '\0';
		return (t);
	}
	s_len = ft_strlen(s);
	s_ini = 0;
	while ((s_ini <= s_len) && (ft_strchr(set, s[s_ini]) != NULL))
		s_ini++;
	s_end = s_len - 1;
	while ((0 <= s_end) && (ft_strchr(set, s[s_end]) != NULL))
		s_end--;
	t = ft_substr(s, s_ini, (s_end - s_ini + 1));
	return (t);
}
