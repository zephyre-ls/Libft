/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:10:42 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/07 17:29:32 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description = copie n octet de src vers dest, 
similaire a memcpy mais != chevauchement ok.
Overlap = zones de memoires pointees par src et dest ont une partie commune, 
cela se produit qd src et dest pointent vers 
des adresses proches dans la memoire. 
Overlap = chevauchement Overflow = debordement 
Retour = pointeur vers dest
Utilite = si src et dest pointent vers des parties d un meme bloc de memoire, 
memmove necessaire pour garantir que la copie
se fait sans perte de donnees.
si dest apres src dans la memoire memmove copie en commencant par la fin
(cela evite d ecraer les donnes de src) 
si dest avant src = copie ordre habituel
*/

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*tmps;
	char		*tmpd;
	size_t		i;
	size_t		j;

	tmpd = dest;
	tmps = src;
	i = 0;
	j = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (tmpd > tmps)
	{
		while (n > 0)
		{
			tmpd[n - 1] = tmps[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
			tmpd[j++] = tmps[i++];
	}
	return (dest);
}

/*#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(int argc, char **argv) 
{
	size_t size = atoi(argv[3]);
	size_t len;
	char *dest;
	//int i = 1;

	len = strlen(argv[2]);
	dest = malloc(sizeof(char) * len + 1);
	if(argc == 4)
	{
	char *result = ft_memmove(dest, argv[2], size);
	dest[size] = '\0';
			 
	printf("result = %s\n", result);
	printf("adressedest = %p\n", dest);
	printf("adressesrc = %p\n", argv[2]);
	free(dest);
	}
	else
	{
	write(1, "ERROR WARNING EXPLOSION", 23);
	}
	return(0);
}*/
/*int	main(void)
{
	char srcdest[10] = "\0"; 
	//creation d une meme chaine pour creer overlap 
	ft_memmove(&srcdest[4], srcdest, 7);  
	printf("resultat = '%s'", srcdest);
	return(0);
}*/
