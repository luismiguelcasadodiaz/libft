/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_calloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/24 10:11:55 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*dst;
	size_t	nmemb;
	size_t	size;

	if (argc != 3)
		printf("Usage ./study_calloc nmemb size");
	else
	{
		nmemb = atoi(argv[1]);
		size = atoi(argv[2]);
		dst = (char *)calloc(nmemb, size);
		printf("%ld %ld %ld ==> %ld", nmemb, size, nmemb * size, sizeof(*dst));
		printf("dst %s\n", dst);
	}
	return (0);
}
