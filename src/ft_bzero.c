/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:02:33 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/13 14:50:37 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description =	Remplir d'octet '\0' les n premiers octets du bloc pointe par s 
Retour = pointeur sur s 
Exemple = s[2] = "PT" => s[2] = "\0\0" 
Utilite = Fonction deconseille dans le man, favoriser memset. 
*/

#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = s;
	i = 0;
	while (i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}
/*#include <stdio.h>

int	main(void)
{
	char str[3] = "KK";

	ft_bzero(str, 3);
	printf("resultat = '%s'", str);
	return (0);
} 
int    main(void)
{
  char *tab;
  tab = malloc(sizeof(char) * 5);
	printf("result = %s", ft_bzero(tab, 5));
  return (0);
}*/
