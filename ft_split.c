/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:26:40 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/16 13:41:09 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parametre = s: La chaîne de caractères à découper.
c: Le caractère délimiteur.
Return = Le tableau de nouvelles chaînes de caractères
résultant du découpage.
NULL si l’allocation échoue.
Description = Alloue malloc et retourne un tableau
de chaînes de caractères obtenu en séparant ’s’ à
l’aide du caractère ’c’, utilisé comme délimiteur.
Le tableau doit être terminé par NULL.
exemple = "bonjour, comment ca va ?"
c = ' space '
devient = "bonjour,", "comment", "ca", va", "?"
Tableau multidemensionnel*/

#include <stdlib.h>
#include "libft.h"

int	ft_countmot(char const *s, char c)
{
	int	i;
	int	nbrword;

	i = 0;
	nbrword = 0;
	if (s[0] == '\0')
		return (0);
	if (s[0] == c)
	{
		i = 0;
		while (s[i] == c)
		{
			i++;
		}
		i++;
	}
	while (s[i])
	{
		if ((s[i] != c && s[i +1] == c) || (s[i + 1] == '\0'))
		{
			nbrword++;
		}
		i++;
	}
	return (nbrword);
}

char	**ft_freemallocerror(char **bigtab)
{
	size_t	i;

	i = 0;
	while (bigtab[i])
	{
		free(bigtab[i]);
		i++;
	}
	free(bigtab);
	return (NULL);
}

int	ft_start(char const *s, int *i, char c)
{
	int	start;

	while (s[*i] && s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char	**bigtab;
	int		i;
	int		j;
	int		start;

	bigtab = malloc(sizeof(char *) * (ft_countmot(s, c) + 1));
	if (s == NULL || bigtab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		start = ft_start(s, &i, c);
		if (i > start)
		{
			bigtab[j] = ft_substr(s, start, i - start);
			if (bigtab[j] == NULL)
				return (ft_freemallocerror(bigtab));
			j++;
		}
	}
	bigtab[j] = NULL;
	return (bigtab);
}

/*#include <stdio.h> 

int	main(void)
{
	char test[50] = "*****yo*ca*va*bien******";
	char c = '*';
	char **result = ft_split(test, c);
	int i = 0;

	while (result[i])
	{
		printf("resultat = %d, %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result); 
	return(0);
}*/
