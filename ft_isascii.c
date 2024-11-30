/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:51:42 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/06 10:48:24 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*#include "stdio.h"

int	main(int argc, char **argv)
{
	char test;
	int result;

	test = argv[1][0];
	result = ft_isascii(test);
	
	if (argc != 2)
	{
		return(0);
	}	
	if (result == 1)
	{
		printf("%c is ascii", test);
	}
	else
	{
		printf("%c is not ascii", test);
	}
	return(0);
}*/
