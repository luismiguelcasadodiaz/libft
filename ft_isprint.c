/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:54 by luicasad          #+#    #+#             */
/*   Updated: 2023/09/14 19:59:01 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_is_punc(int c)
{
	int	is_punc;

	is_punc = (32 <= c && c <= 47);
	is_punc = is_punc || (58 <= c && c <= 64);
	is_punc = is_punc || (91 <= c && c <= 96);
	is_punc = is_punc || (123 <= c && c <= 126);
	return (is_punc);
}

int	ft_isprint(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c) || ft_is_punc(c));
}
