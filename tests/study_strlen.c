/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_strlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/25 11:18:59 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	show(char *src, size_t src_len)
{
	char	buf[src_len];

	strcpy(buf, src);
	printf("src      = >%s< \n", src);
	printf("len  src = >%ld<\n", strlen(src));
	printf("size src = >%ld<\n", sizeof(src));
	printf("buf      = >%s< \n", buf);
	printf("len  buf = >%ld<\n", strlen(buf));
	printf("size buf = >%ld<\n", sizeof(buf));
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
			show(src, strlen(src));
		else
			show(NULL, 0);
	}
	return (0);
}
