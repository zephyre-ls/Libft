/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:04:28 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/06 10:49:01 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	Description = Compare 2 strings pour vois si s1 est >, <, =, 
	Par rapport table ascii
	Return = chaine egales : =; s1 < s2 : valeur neg ; s1 > s2 : valeur pos; 
	Exemple =
	Utilite =
*/
#include <stdlib.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	const char	*ss1;
	const char	*ss2;

	ss1 = s1;
	ss2 = s2;
	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while ((ss1[i] != '\0' && ss2[i] != '\0') && (ss1[i] == ss2[i] && (i < n)))
	{
		i++;
		if (n == i)
		{
			return (0);
		}
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*#include <stdio.h>

int	main(void)
{
	char s1[200] = "aspirateur";
	char s2[0] = "";
	int i = '2';

	printf("verification = %d\n", ft_strncmp(s1, s2, i));
	return(0);
}*/
