/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_memchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:33:38 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/20 13:23:37 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char			*s;
	unsigned char	c;
	size_t			num;

	if (argc != 4)
		printf("Usage ./tirame  str-to-look-in ascii-chr-num-to-find mas-lenght-to-loof-for");
	else
	{
		s = argv[1];
		c = atoi(argv[2]);
		num = atoi(argv[3]);
		printf("memchr(%s, %s, %s) ==> %s\n", argv[1], argv[2], argv[3], memchr(s, c, num));
		s = argv[1];
		c = 0;
		printf("memchr(%s, %d, %s) ==> %s\n", argv[1], c, argv[3], memchr(s, c, num));
		s = argv[1];
		c = atoi("");
		printf("memchr(%s, %d, %s) ==> %s\n", argv[1], c, argv[3], memchr(s, c, num));
		s = NULL;
		c = atoi(argv[2]);
		printf("memchr(%s, %s, %s) ==> %s\n", argv[1], argv[2], argv[3], memchr(s, c, num));
	}
	return (0);
}
