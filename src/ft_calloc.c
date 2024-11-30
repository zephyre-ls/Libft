/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:24:26 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/13 17:57:03 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Description = alloue un bloc de memoire (heap), 
	met tous les octets a la valeur 0 (initialise pour eviter quelle ne
	contienne les valeurs precedents laisse dans la zone memoire != avec malloc) 
	numelement= nbr elements a allouer
	size= taille d un element en octet
	Return = pointeur sur la zone allouee, necessite de caster le pointeur
	(fonction type void) 
	Exemple = tab qui contient 10 entier (int) * taille d un int (4 octet) 
	= 10 * 4 = need 40 octets. 
*/
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*dest;
	size_t	resultsize;

	resultsize = nmemb * size;
	if (nmemb != 0 && ((resultsize / nmemb) != size))
		return (NULL);
	if (resultsize == 0)
		return (malloc(0));
	dest = malloc(sizeof(void) * (resultsize));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < resultsize)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h> 

int	main(void) 
{
	char *result = (char *)ft_calloc(10, 1); 
	printf("result = %s\n", result);
	free(result);
	return(0);
} */
