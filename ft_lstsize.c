/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:55 by luicasad          #+#    #+#             */
/*   Updated: 2023/10/10 12:58:24 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ft_lstsize() counts the numbers of nodes in a list.                        */
/*                                                                            */
/* GETS                                                                       */
/*  *lst : The begining of the list                                           */
/* RETURNS                                                                    */
/*  The lenght of the list                                                    */
/*                                                                            */
/*                                                                            */
/* OPERATION                                                                  */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
int	ft_lstsize(t_list *lst)
{
	size_t	c;
	c = 0;
	if (lst)
		while (lst->next != NULL)
		{
			lst = lst->next;
			c++;
		}
	return (c);
}
