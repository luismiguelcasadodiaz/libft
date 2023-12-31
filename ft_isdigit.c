/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 00:59:06 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/14 01:19:49 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isdigit() function tests for a decimal digit character.                */
/* ``0''         ``1''         ``2''         ``3''         ``4''              */
/* ``5''         ``6''         ``7''         ``8''         ``9''              */

int	ft_isdigit(int c)
{
	return (48 <= c && c <= 57);
}
