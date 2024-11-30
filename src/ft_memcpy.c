/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:37:44 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/07 14:51:26 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	Description = Copie n octets depuis src vers dest. 
	!Chevauchement non autorise (hia) 
	Retour = Pointeur sur dest 
 */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*tmps;
	char		*tmpd;
	size_t		i;

	tmpd = dest;
	tmps = src;
	i = 0;
	if (src == NULL && dest == NULL)
	{
		return (0);
	}
	while (i < n)
	{
		tmpd[i] = tmps[i];
		i++;
	}
	return ((char *)dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[8] = "1234567";
	char	dest[8] = "bb";

	ft_memcpy(dest, src, 6);
	printf("source = '%s'\n", src);
	printf("destination = '%s'\n", dest);
	return (0);
}*/
