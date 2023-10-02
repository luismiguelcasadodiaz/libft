/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:55 by luicasad          #+#    #+#             */
/*   Updated: 2023/10/02 18:59:43 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static char	**allocate(size_t num)
{
	char	**result;
	char	*str;
	size_t	i;

	result = (char **)malloc((num + 1) * sizeof (char *));
	if (result)
	{
		i = 0;
		while (i < num)
		{
			str = (char *)malloc(1 * sizeof (char));
			result[i] = str;
			i++;
		}
		result[num] = ((char *)0);
	}
	return (result);
}
/*
static void	liberate(char **mem, size_t num)
{
	size_t	i;

	if (mem)
	{
		i = 0;
		while (i <= num)
			free(mem[i++]);
		free(mem);
	}
}
*/
/*
static char	**addword(char *word, char **mem, size_t mem_size)
{
	char	**new_mem;
	size_t	i;

	i = 0;
	new_mem = allocate(mem_size + 1);
	if (new_mem)
	{
		ft_memcpy(new_mem, mem, (mem_size + 1) * sizeof(char *));
		//new_mem[mem_size + 1] = word;
		new_mem[mem_size] = word;
	}
	liberate(mem, mem_size);
	while (new_mem[i] != NULL)
	{
		printf(">%s<\n", new_mem[i]);
		i++;
	}
	return (new_mem);
}
*/

size_t	word_count(char const *s, char c)
{
	size_t	counter;
	size_t	idx;
	short	in_word;
	
	idx = 0;
	counter = 1;
	in_word = 1;
	while (s[idx] != '\0')
	{
		if (s[idx] == c && in_word)
			in_word = 0;
		if (s[idx] != c && !in_word)
		{
			counter = counter +1;
			in_word = 1;
		}
		idx++;
	}
	return (counter);
}

/* ft_split() allocates (with malloc(3)) and returns an array of strings      */
/* obtained by slitting 's' using the character c as delimiter.               */
/* The array must end wiht a NULL pointer                                .    */
/*                                                                            */
/* GETS                                                                       */
/*  s: the strig to split                                                     */
/*  c: the delimiter character                                                */
/*                                                                            */
/* RETURNS                                                                    */
/*   An array (NULL-TERMINATED) of new strings resulting form splitting s.    */
/*   NULL if memory allocation fails.                                         */
/* OPERATION                                                                  */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/* PROBLEMS I GOT                                                             */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*trimmed;
	size_t	i;
	size_t	j;
	size_t	word_counter;

	if (!s || !c)
		return (NULL);
	trimmed = ft_strtrim(s, &c);
	word_counter = word_count(s, c);
	if (word_counter == 0)
		return (allocate(0));		
	result = allocate(word_counter);
	word_counter = 0;
	i = 0;
	while (trimmed[i] != '\0')
	{
		j = i;
		while (ft_strchr(&c, trimmed[j]) == NULL)
			j++;
		result[word_counter] = ft_substr(trimmed, i, (j - i));
		word_counter = word_counter + 1;
		while (trimmed[j] != '\0' && ft_strchr(&c, trimmed[j]) != NULL)
			j++;
		i = j;
	}
/*	if (trimmed[j] == '\0')
	{
		result[word_counter] = ft_substr(trimmed, i, (j - i));
	}
	*/
	free(trimmed);
	return (result);
}
