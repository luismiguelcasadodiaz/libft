/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:54 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/15 19:36:06 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* The strlen() function computes the length of the string s                  */
/* a while loop counts chars till it finds '\0'                               */
/* RETURNS the number of characters preceding the terminating NUL character   */

/* ==== this version that checks null values does not pass paco =============
size_t	ft_strlen(const char *s)
{
	size_t	idx;

	if (s != NULL)
	{
		idx = -1;
		while (s[++idx] != '\0')
			;
		return (idx);
	}
	else
		return (0);
}
*/
size_t	ft_strlen(const char *s)
{
	size_t	idx;

	idx = -1;
	while (s[++idx] != '\0')
		;
	return (idx);
}
