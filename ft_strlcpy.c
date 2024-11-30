/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:22:41 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/08 15:29:42 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	
Description = Copie strings. 
Retour = total lenght of the string they tried to create. 
That means the lenght of src. 
Utilite = plus sure que strcpy, 
protege contre l overflow (=depassement de tampon) 
en limitant la copie a la size de dest. copies up to size -1 (pour le NULL) 
Si chevauchement = octet de src sont copie dans une zone tampon 
puis copie vers dest.
*/
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	sizesrc;

	sizesrc = 0;
	while (src[sizesrc] != '\0')
	{
		sizesrc++;
	}
	if (size == 0)
	{
		return (sizesrc);
	}
	i = 0;
	while (src[i] != '\0' && i < (size -1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (sizesrc);
}
/*#include <stdio.h>

int main(void)
{
	char src[40] = "lorem ipsum dolor sit amet";
	char dest[8]; 
	
	printf("result = '%zu'\n", ft_strlcpy(dest, src, 0));
	printf("src = '%s'\n", src); 
	printf("dest = '%s'\n", dest);
	return (0);
}*/
