/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:55:15 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/13 16:06:07 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	result = ft_isalpha(test);
	
	if (argc != 2)
	{
		return(0);
	}	
	if (result == 1)
	{
		printf("%c est alpha", test);
	}
	else
	{
		printf("%c n'est pas alpha", test);
	}
	return(0);
}*/
