/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:37:44 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/07 14:51:26 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Description = recherche un caracte dans un bloc de memoire 
diff avec strchr = memchr ne se soucie pas du type de contenue 
tandis strchr travaille avec des strings. Plus continue meme pas apres des NULL
Utilite = recherche dans des blocs de memoires bruts ou des donnes binaires
 */
#include <stdlib.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;
	char		ocu;

	str = s;
	ocu = (char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ocu)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h> 

int	main(int argc, char **argv)
{
	size_t size = atoi(argv[3]);
	char test = argv[1]; 
	int c = atoi(argv[2]);

	if (argc == 4)
	{
		char *result = ft_memchr(argv[1], argv[2], size);
		printf("resultat = %c\n", *(char *)result);
		return(0);
}*/
