/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:07:16 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/14 19:47:15 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description = Alloue de la memoire(in heap) pour realiser une copie de string 
Return = un pointeur vers l espace de stockage contenant la chaine copie
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	const	char *test = "et bonjour ca va";
	const	char *dtest;

	dtest = ft_strdup(test);
	printf("%s", dtest);
	return (0);
}*/
