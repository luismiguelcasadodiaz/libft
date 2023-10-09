/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:02:55 by luicasad          #+#    #+#             */
/*   Updated: 2023/10/09 14:29:00 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ************************************************************************** */
/* create_empty_string()  allocates space for an empty string                 */
/*                                                                            */
/* GETS                                                                       */
/*  *str_size : pointer to the size of the string to append c.                */
/*                                                                            */
/* RETURNS                                                                    */
/*  NULL when there is not availabel memory                                   */
/*  A pointer to a "" string                                                  */
/*                                                                            */
static char	*create_empty_string(size_t	*str_size)
{
	char	*str;

	*str_size = 0;
	str = (char *)malloc(1 * sizeof(char));
	if (str)
	{
		str[0] = '\0';
		*str_size = 1;
	}
	return (str);
}

/* ************************************************************************** */
/* add_digit()  appends a char in the tail of an string                       */
/*                                                                            */
/*                                                                            */
/* GETS                                                                       */
/*  c : the char to append to str                                             */
/*  **str :Address of the pointer the string to append to char at tail        */
/*  *str_size : pointer to the size of the string to append c.                */
/*                                                                            */
/* RETURNS                                                                    */
/*  Nothing, but it worths to be aware of the fact that **str and *str_size   */
/*  change. they return new string and new string size.                       */
/*                                                                            */
/*                                                                            */
/*  OPERATION                                                                 */
/*  Allocates memory for one string a char longer than str_size.              */
/*                                                                            */
/*  Copies str_size bytes of memory from str, to new_str.                     */
/*                                                                            */
/*  Insert c in the tail of new_str.                                          */
/*                                                                            */
/*  null-terminate new_str.                                                   */
/*                                                                            */
/*  Update the *str_size to new_str length                                    */
/*                                                                            */
/*  free the memory of str                                                    */
/*                                                                            */
/*  Change the memroy address of the pointer referencing to str               */
/*                                                                            */
static void	add_digit(char c, char **str, size_t *str_size)
{
	char	*new_str;

	new_str = (char *)malloc((*str_size + 1) * sizeof(char));
	if (new_str)
	{
		ft_memcpy(new_str, *str, *str_size);
		new_str[*str_size -1] = c;
		new_str[*str_size] = '\0';
		*str_size = *str_size + 1;
		free(*str);
		*str = new_str;
	}
	else
		*str = NULL;
}

/* ************************************************************************** */
/* aux_itoa()is a recursive function that extract digits from an integer and  */
/* concatenates them at the tail of the string str                            */
/*                                                                            */
/* GETS                                                                       */
/*  n : the integer to extract digits from                                    */
/*  **str :Address of the pointer to  the string to append to digit           */
/*  *str_size : pointer to the size of the string to append digit.            */
/*                                                                            */
/* RETURNS                                                                    */
/*  Nothing, but worths to be aware that thru **str and *str_size there is    */
/*  communication with the calling function.                                  */
/*                                                                            */
/* OPERATES                                                                   */
/*  Treates diferently accordingly to integer's sign.                         */
/*                                                                            */
/*  When the integer has more than one digit, reduce integer size dividing    */
/*  by 10.                                                                    */
/*                                                                            */
/*  When the integer has one digit (n <= 9), calculate his ascii char.        */
/*                                                                            */
/*                         num = 48 + n % 10                                  */
/*                                                                            */
/*  When n is INT_MIN (-2147 483 648) the required sign change happens in     */
/*  the result of the modulo operation. I wait to change the sign when the    */
/*  integer is small.                                                         */
/*                                                                            */
/*             ----------------------------------------                       */
/*                         num = 48 + (-n % 10)                               */
/*  That does not work with INT_MIN                                           */
static void	aux_itoa(int n, char **str, size_t *str_size)
{
	char	num;

	if (0 < n)
	{
		if (9 < n)
			aux_itoa(n / 10, str, str_size);
		num = 48 + n % 10;
		add_digit(num, &(*str), str_size);
	}
	else 
	{
		if (n < -9)
			aux_itoa(n / 10, str, str_size);
		num = n % 10;
		num = 48 - num;
		add_digit(num, &(*str), str_size);
	}
}

/* ft_itoa() allocates (with malloc(3)) and returns a strings representing    */
/* the integer received as an argument.                                       */
/* Negative numbers must be handlepointer                                .    */
/*                                                                            */
/* GETS                                                                       */
/*  n: the integer to convert                                                 */
/*                                                                            */
/* RETURNS                                                                    */
/*   The string representing the intege                                       */
/*   NULL if memory allocation fails.                                         */
/*                                                                            */
/* OPERATION                                                                  */
/*  Starts creating an empty string.                                          */
/*                                                                            */
/*  When n = 0 add a '0' to the empty string                                  */
/*  When n is positive convert the integer into string                        */
/*  When n is negative add '-' to the empty string and convert the integer    */
/*                                                                            */
/* PROBLEMS I GOT                                                             */
/* I complicated my life with this approach. It aims to allocate memory for   */
/* the string representing the integer gradually as new digits are required.  */
/*                                                                            */
/* I learn to deal with a pointer passed by reference to a function           */

char	*ft_itoa(int n)
{
	char	*str;
	size_t	str_size;

	str = create_empty_string(&str_size);
	if (n == 0)
		add_digit('0', &str, &str_size);
	else if (n > 0)
		aux_itoa(n, &str, &str_size);
	else
	{
		add_digit('-', &str, &str_size);
		aux_itoa(n, &str, &str_size);
	}
	return (str);
}
