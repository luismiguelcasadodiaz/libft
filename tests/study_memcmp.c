/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_memcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:53:22 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/20 17:54:07 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	usage(void)
{
	printf("Ussage ./tirame  str-one-to-compare ");
	printf("str-two-to-compare ");
	printf("mas-lenght-to-compare \n");
}
/*
		s1 = argv[1];
		s2 = (char *) '\0';
		printf("memcmp(%s, %s, %zu)", argv[1], s2, num);
		printf(" => %d\n", memcmp(s1, s2, num));
 * */

int	main(int argc, char **argv)
{
	char			*s1;
	char			*s2;
	size_t			num;

	if (argc != 4)
		usage();
	else
	{
		s1 = argv[1];
		s2 = argv[2];
		num = atoi(argv[3]);
		printf("memcmp(%s, %s, %zu)", argv[1], argv[2], num);
		printf(" => %d\n", memcmp(s1, s2, num));
		s1 = argv[1];
		s2 = &""[0];
		printf("memcmp(%s, %s, %zu)", argv[1], s2, num);
		printf(" => %d\n", memcmp(s1, s2, num));
		s1 = NULL;
		s2 = argv[2];
		printf("memcmp(%s, %s, %zu)", s1, argv[2], num);
		printf(" => %d\n", memcmp(s1, s2, num));
	}
	return (0);
}
