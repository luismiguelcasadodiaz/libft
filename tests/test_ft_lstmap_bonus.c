/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:37:18 by luicasad          #+#    #+#             */
/*   Updated: 2023/10/17 18:40:51 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

void	show_words(char	**words)
{
	size_t	i;

	if (words)
	{
		i = 0;
		while (words[i] != NULL)
			printf(">%s<\n", words[i++]);
	}
	else
		printf("Nothing to print\n");
}

void	del_str(void *word)
{
	if (word)
		free(word);
}

void	print_str(void *word)
{
	if (word)
		printf(">%s<\n", (char *) word);
}

void	*my_upper(void *word)
{
	char	*buf;

	if (word)
	{
		buf = ft_strdup((char *)word);
		buf[1] = '.';
		return ((void *)buf);
	}
	else
		return (word);
}

t_list	*insert_words_in_list(char	**words)
{
	size_t	i;
	t_list	*lst;
	t_list	*new_node;

	lst = NULL;
	if (words)
	{
		i = 0;
		while (words[i] != NULL)
		{
			new_node = ft_lstnew(words[i++]);
			if (new_node == NULL)
			{
				ft_lstclear(&lst, &del_str);
				return (lst);
			}
			ft_lstadd_back(&lst, new_node);
		}
		return (lst);
	}
	else
	{
		printf("Nothing to insert in list\n");
		return (NULL);
	}
}

int	main(int argc, char **argv)
{
	char	*src;
	t_list	*lst;
	t_list	*new;
	char	**result;

	if (argc != 2)
	{
		printf("Usage ./test_ft_lstmap str\n");
		printf("being str sentence whose words i split and capitalize.\n");
	}
	else
	{
		src = argv[1];
		printf("src = >%s<\n", src);
		result = ft_split(src, ' ');
		show_words(result);
		lst = insert_words_in_list(result);
		ft_lstiter(lst, &print_str);
		new = ft_lstmap(lst, &my_upper, &del_str);
		ft_lstiter(new, &print_str);
		free(result);
		ft_lstclear(&lst, &del_str);
		ft_lstclear(&new, &del_str);
	}
	return (0);
}
