/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_tolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:16:28 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/22 17:33:08 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 600)
	{
		printf("%d,", i),
		printf(" l >%d< - u >%d<\n", tolower(i), toupper(i));
		i++;
	}
	printf("EOF,"),
	printf(" l >%d< - u >%d<\n", tolower(EOF), toupper(EOF));
	return (0);
}
