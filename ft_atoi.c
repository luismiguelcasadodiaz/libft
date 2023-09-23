/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:54 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/23 19:06:07 by luicasad         ###   ########.fr       */
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

/* my_strtrim() removes all whitespace characters from the beginning of a     */
/* string         .                                                           */
/* As whitespace is counted everything for which my_isspace returns true.     */
/*                                                                            */
/* RETURNS                                                                    */
/* Returns its argument without leading and triling spaces                    */
/*                                                                            */
/* OPERATION                                                                  */
/* Loops from the begining towards end skipping spaces. When detects no-space */
/* keeps index of first valid no-space in variable ini                        */
/*                                                                            */
/*                                                                            */
/* Shift ini.len char to string's head                                       */
/*                                                                            */
/* len = ft_strlen(s) - 1;// to correct base zero c indexing                  */
/*                                                                            */
static char	*my_strtrim(char *s)
{
	int	ini;
	int	len;
	int	idx;

	len = ft_strlen(s) -1;
	ini = 0;
	while ((my_isspace(s[ini])) && ini <= len)
		ini++;
	idx = 0;
	while (ini <= len)
	{
		s[idx] = s[ini];
		idx++;
		ini++;
	}
	s[idx] = '\0';
	return (s);
}

/* is_valid() checks if string is valid to be converted into string           */
/* RETURNS                                                                    */
/*                                                                            */
/* 1 (true) if is a valid string and modify s to hold it                      */
/* 0 (flase) if it is not a valid string                                      */
/*                                                                            */
/* OPERATION                                                                  */
/* After validation of first char, it trims first sequence of digits          */
/*                                                                            */
static int	is_valid(char *s)
{
	int	idx;
	int	ok;

	ok = s[0] == '+' || s[0] == '-' || ft_isdigit(s[0]);
	if (ok)
	{
		idx = 1;
		while (ft_isdigit(s[idx]))
			idx++;
		s[idx] = '\0';
		return (ok);
	}
	else
		return (ok);
}

/* evaluate()  transforms the string into a value                             */
/* For the sign analizes first char and set in idx where to start evaluation  */
/*                                                                            */
/* OPERATION                                                                  */
/* if first char equals '-', evaluation starts at idx = 1  sign = -1 negative */
/* if first char equals '+', evaluation starts at idx = 1, sign = 1 positive  */
/* if first char is digit  , evaluation starts at idx = 0, sign = 1 positive  */
/*                                                                            */
/* Multiply total by 10, moves value to the left and creates space for next   */
/* digit.                                                                     */
/*                                                                            */
static int	evaluate(char *s)
{
	int	total;
	int	sign;
	int	idx;

	idx = 0;
	if ((s[0] == '-') || (s[0] == '+')) 
		idx = 1;
	sign = 1;
	if (s[0] == '-')
		sign = -1;
	total = 0;
	while (s[idx] != '\0')
		total = total * 10 + (s[idx++] - '0');
	return (total * sign);
}

/* ft_atoi() converts the INITIAL portion of the string pointed to by nptr to */
/* int.                                                                       */
/*                                                                            */
/* RETURNS                                                                    */
/* The converted value or 0 on error.                                         */
/*                                                                            */
/* OPERATION                                                                  */
/* 1.- remove leading spaces wiht my_strtrim                                  */
/* 2.- evaluate first set of continous digits                                 */
/*                                                                            */
int	ft_atoi(const char *nptr)
{
	int		result;
	char	*trimmed;

	trimmed = my_strtrim((char *)nptr);
	result = 0;
	if (is_valid(trimmed))
		result = evaluate(trimmed);
	return (result);
}
