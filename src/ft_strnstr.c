/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:04:28 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/13 13:19:35 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Description = recherche la premiere occurence d une sous chaine 
big = chaine dans laquelle effectuer la recherche 
little = la sous chaine a rechercher dans la big	
Utilite = similaire à strstr (mais en + variante d une longueur max a chercher)
*/
#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)&big[i]);
	while (big[i] != '\0' && (i + j) < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little [j] && (i + j) < len)
			{
				j++;
				if (little[j] == '\0')
				{
					return ((char *)&big[i]);
				}
			}
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h> 

int	main(void)
{
	char cortex[20] = "Taeko et Michel";
	char minus[10] = "eko"; 
	int i = 5;

	printf("resultat = %s\n", ft_strnstr(cortex, minus, i));
	//printf("resultat = %d\n", strnstr(cortex, minus, i ));
	return(0);
}*/
