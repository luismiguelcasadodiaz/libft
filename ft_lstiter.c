/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:55 by luicasad          #+#    #+#             */
/*   Updated: 2023/10/12 16:31:03 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ft_lstiter() iterates the list and applies th funciotn 'f' to the content  */
/* of each node                                                               */
/*                                                                            */
/* GETS                                                                       */
/*  *lst : The address of a pointer to a node.                                */
/*  *del : The address of the function used to iterate on teh list            */
/*                                                                            */
/* RETURNS                                                                    */
/*  Nothing                                                                   */
/*                                                                            */
/* OPERATION                                                                  */
/*                                                                            */
/*   loops the list while there is a node to loop throu                       */
/*                                                                            */
/*   Inside the while 'actual' keeps the address of node.                     */
/*   'lst' moves to next node of actual to check again the while condition.   */
/*   At list end, lst will get NULL, as required in the specification.        */
/*                                                                            */
/*   calls del function to remove actual's content.                           */
/*   release actual memory                                                    */
/*                                                                            */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
