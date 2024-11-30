/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:25:06 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/15 15:09:49 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parametre = s1: La chaîne de caractères à trimmer.
set: Le set de référence de caractères à trimmer.
Return = La chaîne de caractères trimmée.
NULL si l’allocation échoue.
Ft autorise = malloc
Description = Alloue (avec malloc(3)) et retourne une copie de
la chaîne ’s1’, sans les caractères spécifiés
dans ’set’ au début et à la fin de la chaîne de
caractères.
*/
#include <stdlib.h>
#include "libft.h"

int	ft_s1first(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	same;

	i = 0;
	while (s1[i] != '\0')
	{
		same = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				same = 1;
			}
			j++;
		}
		if (same == 0)
		{
			return (i);
		}
		i++;
	}
	return (i);
}

int	ft_s1end(char const *s1, char const *set)
{
	int	i;
	int	same;
	int	len;

	len = ft_strlen(s1) - 1;
	while (len >= 0)
	{
		same = 0;
		i = 0;
		while (set[i] != '\0')
		{
			if (s1[len] == set[i])
			{
				same = 1;
			}
			i++;
		}
		if (same == 0)
		{
			return (len);
		}
		len--;
	}
	return (len);
}

char	*ft_fullsettrim(void)
{
	char	*dest;

	dest = malloc(sizeof(char) * 1);
	if (dest == NULL)
		return (NULL);
	dest[0] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		j;
	char	*dest;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_s1first(s1, set);
	end = ft_s1end(s1, set);
	if (start > end)
		return (ft_fullsettrim());
	dest = malloc(sizeof(char ) * (end - start + 2));
	if (dest == NULL)
		return (NULL);
	j = 0;
	while (start <= end)
	{
		dest[j++] = s1[start++];
	}
	dest[j] = '\0';
	return (dest);
}
/*#include <stdio.h> 

int	main(void)
{
	char *test = "bacTestabc";
	char *set = "abc";
	char *result = ft_strtrim(test, set);

	printf("resultat = %s", result);
	free(result);
	return(0);
}*/
