/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:19:47 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/14 14:44:55 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parametre = 
s : la chaine de laquelle extraire la  nouvelle chaine 
start = l index de debut de la new chaine dans la chaine s
len = taille max de la nouvelle chaine 
Return = new string et NULL si alloc echoue 
Fonction ok = malloc
Description = Alloue (avec malloc(3)) et retourne une chaîne de
caractères issue de la chaîne ’s’.
Cette nouvelle chaîne commence à l’index ’start’ et
a pour taille maximale ’len’.
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = start;
	j = 0;
	if (start < ft_strlen(s))
	{
		while (s[i] != '\0' && i < start + len)
			dest[j++] = s[i++];
	}
	dest[j] = '\0';
	return (dest);
}
/*#include <stdio.h> 

int	main(void)
{
	char test[10] = "hola";
	char *result = ft_substr(test, 0, 184455454467451615);
	
	printf("resultat = %s\n", result);
	free(result); 
	return(0);	
}*/
