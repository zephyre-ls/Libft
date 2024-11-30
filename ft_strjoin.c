/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:22:49 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/14 15:25:37 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parametre = s1: La chaîne de caractères préfixe.
s2: La chaîne de caractères suffixe.
Return = La nouvelle chaîne de caractères.
NULL si l’allocation échoue.
Ft autorise = malloc
Description = Alloue (avec malloc(3)) et retourne une nouvelle
chaîne, résultat de la concaténation de s1 et s2.
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		lens1;
	int		lens2;
	char	*dest;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		dest[i++] = s2[j++];
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>

int	main(void) 
{
	char s1[0] = "";
	char s2[0] = "";
	char *result = ft_strjoin(s1, s2);
	
	printf("voyons si ca fonctionne = %s\n", result);
	free(result);
	return(0);
}*/
