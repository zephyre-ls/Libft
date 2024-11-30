/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:10:10 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/07 16:05:32 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Description =  Remplie les n premiers octets du pointeur s avec l octet c.
	Retour = Pointeur sur la zone memoire s.
	Exemple = 45651 (s, '0', 4) = 0000
	Utilite = reniatiliser rapidement ? 
 */
#include <stdlib.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp;
	size_t	i;

	tmp = s;
	i = 0;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return ((void *)tmp);
}
/*#include <stdio.h>
int	main(void)
{
	char str[8] = "niania";
	int c;
	
	c = '0';
	
	ft_memset(str, c, 8);
	printf("resultat: '%s'", str);
	return (0);
}*/
