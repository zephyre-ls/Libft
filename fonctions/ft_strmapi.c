/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:04:28 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/06 10:49:01 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description =
Return =
Exemple =
Utilite =
*/
#include <stdlib.h>
#include "libft.h"
/*char	ft_essaie(unsigned int i, const char c)
{
		if (i % 2 == 0)
		{
			return (c - 32);
		}
		return (c);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dest == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{
	char test[6] = "yaouh";

//	f = &ft_strchr;
	char *result = ft_strmapi(test, ft_essaie);

	printf("resultat = %s\n", result);
	free(result);
	return(0);
}*/
