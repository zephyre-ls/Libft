/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:39:41 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/08 15:31:50 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description = concate string et renvoie la taille de src  
Exemple = si sizedest < sizesrc == chaine tronque
			 si sizedest => sizesrc == chaine copie integralement 
*/
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	sizedst;
	size_t	sizesrc;

	sizesrc = ft_strlen(src);
	sizedst = ft_strlen(dest);
	i = 0;
	if (size <= sizedst)
		return (sizesrc + size);
	i = 0;
	while (src[i] != '\0' && (sizedst + i) < size - 1)
	{
		dest[sizedst + i] = src[i];
		i++;
	}
	if ((sizedst + i) < size)
		dest[sizedst + i] = '\0';
	return (sizesrc + sizedst);
}

/*#include <stdio.h>

int main(void)
{
	char src[0] = '\0';
	char dest[11] = "a"; 
	
	printf("result = '%lu'\n", ft_strlcat(dest, "lorem ipsu", 15));
	printf("src = '%s'\n", src); 
	printf("dest = '%s'\n", dest);
	return (0);
}*/
