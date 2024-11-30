/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:44:37 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/13 16:15:41 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
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
	result = ft_isalnum(test);
	
	if (argc != 2)
	{
		return(0);
	}	
	if (result == 1)
	{
		printf("%c est alnum", test);
	}
	else
	{
		printf("%c n'est pas alnum", test);
	}
	return(0);
}*/
