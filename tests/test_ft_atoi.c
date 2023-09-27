/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:35:31 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/27 16:36:14 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

void	prueba(char *str)
{
	char	*pmistr;
	char	*psustr;
	int		mine;
	int		your;

	pmistr = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	psustr = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	strcpy(pmistr, str);
	strcpy(psustr, str);
	mine = ft_atoi(pmistr);
	your = atoi(psustr);
	printf("src = >%s<, ", str);
	printf("mine >%d<", mine);
	printf("your >%d<", your);
	if (mine == your)
		printf("\033[1;92m[OK]");
	else
		printf("\033[1;91m[KO]");
	printf("\033[0m\n");
}

int	main(int argc, char **argv)
{
	char	*src;

	if (argc != 2)
		printf("Usage ./test_ft_atoi stringi");
	else
	{
		src = argv[1];
		prueba(src);
	}
	return (0);
}
