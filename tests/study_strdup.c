/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_strdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/24 13:52:49 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	show(char *src)
{
	printf("src = >%s<\n", src);
	printf("dup = >%s<\n", strdup(src));
}

int	main(int argc, char **argv)
{
	char	*src;
	int		comp;

	if (argc != 2)
		printf("Usage ./study_strdup src");
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
