/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:54 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/24 11:04:20 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>

/* The ft_calloc() function allocates memory for an array of nmemb elements   */
/* of size bytes each and returns a pointer to the allocated memory.          */
/*                                                                            */
/* The memory is set to zero. i do that with ft_bzero().                      */
/*                                                                            */
/* If nmemb or size is 0, then ft_calloc() returns a unique pointer value     */
/* that can later be successfully passed to free().                           */
/*                                                                            */
/* If the multiplication of nmemb and size would result in integer overflow,  */
/* ((nmemb * size)  > INT_MAX ) then ft_calloc() returns an error(0x0).       */
/*                                                                            */
/* I check if nmemb > INT_MAX/size to avoid integer overflow caused by the    */
/* multiplication itself.                                                     */
/*                                                                            */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb == 0 || size == 0)
		return ((void *)malloc(1));
	if (nmemb > (INT_MAX / size))
		return (((void *)0));
	result = (void *)malloc(nmemb * size);
	if (result == NULL)
		return ((void *)0);
	else
	{
		ft_bzero(result, nmemb * size);
		return (result);
	}
}
