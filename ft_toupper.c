/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:07:18 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/05 14:22:25 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
/*#include <stdio.h>

int	main(void)
{
	int min = 'a';
	int maj = 'A';

	printf("resultat = '%d\n'", ft_toupper(min));
	printf("resultat2 = '%d'", ft_toupper(maj));
	return(0); 
}*/
