/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:06:54 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/13 16:07:08 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
	result = ft_isdigit(test);
	
	if (argc != 2)
	{
		return(0);
	}	
	if (result == 1)
	{
		printf("%c isdigit", test);
	}
	else
	{
		printf("%c isnotdigit", test);
	}
	return(0);
}*/
