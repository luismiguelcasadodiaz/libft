/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:55 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/25 22:47:59 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ft_strjoin() concatenates in a new string the prefix and the suffix args   */
/*                                                                            */
/* GETS                                                                       */
/*  s1: the prefix string.                                                    */
/*  s2: the suffix string.                                                    */
/*                                                                            */
/* RETURNS                                                                    */
/*  The new string resulting from s1 + s2  concatenation or NULL if malloc    */
/*  fails.                                                                    */
/*                                                                            */
/* OPERATION                                                                  */
/*  calculate prefix and suffix length.                                       */
/*  add lengtht                                                               */
/*  allocate memory                                                           */
/*                                                                            */
/*                                                                            */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*join;

	size = ft_strlen(s1) + ft_strlen(s2);
	join = (char *)malloc(size + 1);
	if (join != NULL)
	{
		ft_strlcpy(join, s1, size);
		ft_strlcat(join, s2, size);
	}
	return (join);
}
