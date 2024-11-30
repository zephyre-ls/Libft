/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:24:08 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/05 16:40:26 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description = a 1er occurence de c dans string s return un ptr sur s 
Return = un ptr qui pointe sur la premiere occurene et le reste de la string 
Exemple = Coucou, int o = oucou. 
Utilite = manipulation de chaine
pour trouver des delimiteurs ou analyser chaine de txt.
*/

#include <stdlib.h> 
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ocu;

	ocu = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ocu)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (ocu == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*#include <stdio.h> 
int main(void)
{
  char str[10] = "bonjour";
  int c = 'j'; 
//int c = 'h';	
//int c = 'o'; 
  printf("result = '%s\n'", ft_strchr(str, c));
  return(0);
}*/
