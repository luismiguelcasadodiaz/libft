/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_strlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/24 13:57:50 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	show(char *src)
{
	printf("src = >%s<\n", src);
	printf("dup = >%ld<\n", strlen(src));
}

int	main(int argc, char **argv)
{
	char	*src;
	int		comp;

	if (argc != 2)
		printf("Usage ./study_strlen src");
	else
	{
		src = argv[1];
		comp = strcmp(src, "NULL");
		if (comp)
			show(src);
		else
			show(NULL);
	}
	return (0);
}
