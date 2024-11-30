/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:19:05 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/07 12:47:59 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description = Compare les zones memoires de dest par rapport a src, 
nbr specifie par n.
Tant que les deux octets sont egaux passe aux autres. Si != renvoie la diff. 
Retour = Entier negatif, nul ou positif. Valeur de difference. 
			Neg = dest < src
			Null = blocs identique 
			Posi = dest > src
Exemple = dest[2] = "AB" src[2] = "BB" => '-1' 
*/
#include <stdlib.h>
#include "libft.h"

int	ft_memcmp(void *dest, const void *src, size_t n)
{
	const char	*tmps;
	char		*tmpd;
	size_t		i;

	tmpd = dest;
	tmps = src;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (tmpd[i] != tmps[i])
		{
			return (((unsigned char *)dest)[i] - ((unsigned char *)src)[i]);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	char dest[5] = "15AZ";
	char src[5] = "15B";
	
	printf("resultat = '%i'", ft_memcpy(dest, src, 3));
	return(0);
}*/
