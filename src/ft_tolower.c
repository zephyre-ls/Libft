/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:20:21 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/05 14:22:07 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
/*#include <stdio.h>

int	main(void)
{
	int maj = 'A'; 
	int min = 'a';
	
	printf("result1 = '%d\n'", ft_tolower(maj));
	printf("result1 = '%d\n'", ft_tolower(min));
	return(0);
}*/
