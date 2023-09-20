/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tirame.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/20 14:04:09 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*dst;
	char	*src;
	size_t	num;

	if (argc != 4)
		printf("Usage ./tirame dest src num");
	else
	{
		num = atoi(argv[3]);
		dst = (char *)malloc(1 * sizeof(char));
		*dst = '\0';
		dst = ((void *)0);
		src = argv[2];
		printf("%ld %ld %ld\n", sizeof(*dst), sizeof(*src), sizeof(num));
		printf("%p %p\n", &dst[0], &src[0]);
		printf("src dst %s\n", memmove(dst, src, num));
	}
	return (0);
}
