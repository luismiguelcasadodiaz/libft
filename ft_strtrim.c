/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:55 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/23 11:06:38 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* my_isspace checks for white-space characters.                              */
/*                                                                            */
/* In "C" and "POSIX" locales, these  are: space (' '), form-feed ('\f'),     */
/* newline ('\n'), carriage return ('\r'), horizontal tab ('\t'), and         */
/* vertical tab ('\v').                                                       */
/*                                                                            */
/* RETURNS:                                                                   */
/*  0 (false) if c is not an space                                            */
/*  1 (true)  if c belong to the "space" set                                  */
/*                                                                            */
static int	my_isspace(int c)
{
	int	result;

	result = ((char)c == ' ');
	result = result || ((char)c == '\f');
	result = result || ((char)c == '\n');
	result = result || ((char)c == '\r');
	result = result || ((char)c == '\t');
	result = result || ((char)c == '\v');
	return (result);
}

/* ft_strtrim() removes all whitespace characters from the beginning and the  */
/* end of a string.                                                           */
/* As whitespace is counted everything for which my_isspace returns true.     */
/*                                                                            */
/* RETURNS                                                                    */
/* Returns its argument without leading and triling spaces                    */
/*                                                                            */
/* OPERATION                                                                  */
/* Loops from the begining towards end skipping spaces. When detects no-space */
/* keeps index of first valid no-space in variable ini                        */
/*                                                                            */
/* Loops from end towards the begining skipping spaces. When detects no-space */
/* keeps index of last  valid no_space in variable end                        */
/*                                                                            */
/* Shift ini..end char to string's head                                       */
/*                                                                            */
/* end = ft_strlen(s) - 1;// to correct base zero c indexing                  */

char	*ft_strtrim(char *s)
{
	int	ini;
	int	end;
	int	idx;

	end = ft_strlen(s) - 1;
	ini = 0;
	while (my_isspace(s[ini]) && ini <= end)
		ini++;
	while (my_isspace(s[end]) && 0 <= end)
		end--;
	idx = 0;
	while (ini <= end)
	{
		s[idx] = s[ini];
		idx++;
		ini++;
	}
	s[idx] = '\0';
	return (s);
}
