/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:29:49 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/05 16:40:30 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Description = recherche la derniere occurence (int c) 
	Return = la chaine apres l occurence  
	Exemple = coucou 'o' = ou
	utilite =
*/
#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*sizes;
	char		ocu;

	sizes = s;
	ocu = (char)c;
	while (*sizes != '\0')
	{
		sizes++;
	}
	while (sizes >= s)
	{
		if (*sizes == ocu)
		{
			return ((char *)sizes);
		}
		sizes--;
	}
	return (NULL);
}
/*#include <stdio.h> 
int main(void)
{
  char str[10] = "bonjour";
  int c = 'j'; 
//int c = 'h';	
//int c = 'o'; 
  printf("result = '%s\n'", ft_strrchr(str, c));
  return(0);
}*/
