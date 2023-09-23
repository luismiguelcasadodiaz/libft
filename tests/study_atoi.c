/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/23 19:19:37 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char			*src;
	unsigned char	*num;

	if (argc != 2)
		printf("Usage ./study_atoi src num");
	else
	{
		src = argv[1];
		printf("src = >%s<, ", src);
		printf("int >%d<\n", atoi(src));
		printf("src = >\\0<, ");
		printf("int >%d<,\n", atoi((char *) '\0'));
		printf("src = >(null)<, ");
		printf("int >%d<,\n", atoi((char *)((void *)0)));
	}
	return (0);
}
