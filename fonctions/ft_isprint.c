/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:56:23 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/06 10:47:58 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	result = ft_isprint(test);
	
	if (argc != 2)
	{
		return(0);
	}	
	if (result == 1)
	{
		printf("%c isprint", test);
	}
	else
	{
		printf("%c is not print", test);
	}
	return(0);
}*/
