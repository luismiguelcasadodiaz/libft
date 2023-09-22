/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_strchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/22 18:33:36 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char			*src;
	unsigned char	*num;

	if (argc != 3)
		printf("Usage ./tirame src num");
	else
	{
		num = (unsigned char *)argv[2];
		src = argv[1];
		printf("src = >%s<, ", src);
		printf("first >%s<, ", strchr(src, *num));
		printf("last  >%s<\n", strrchr(src, *num));
		printf("src = >%s<, ", src);
		printf("first >%s<, ", strchr(src, '\0'));
		printf("last  >%s<\n", strrchr(src, '\0'));
		printf("src = >%s<, ", (char *)((void *)0));
		printf("first >%s<, ", strchr((char *)((void *)0), *num));
		printf("last  >%s<\n", strrchr((char *)((void *)0), *num));
	}
	return (0);
}
