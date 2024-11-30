/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:28:15 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/16 15:21:29 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_len(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
	{
		size++;
	}
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

void	ft_negativ(int *n, char *dest)
{
	if (*n < 0)
	{
		*n = -*n;
		dest[0] = '-';
	}
}

char	*ft_itoa(int n)
{
	char		*dest;
	const char	*min;
	int			len;

	len = ft_len(n);
	min = "-2147483648";
	if (n == -2147483648)
		return (ft_strdup(min));
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	dest[len] = '\0';
	if (n < 0)
		ft_negativ(&n, dest);
	if (n == 0)
		dest[0] = '0';
	while (n != 0)
	{
		dest[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (dest);
}

/*#include <stdio.h>
#include <unistd.h> 

int	main(int argc, char **argv) 
{
	
	if(argc == 2)
	{
		int num = atoi(argv[1]);
		char *result = ft_itoa(num);
		if (result)
		{
		printf("result = %s", result);
		free(ft_itoa(atoi(argv[1])));
		}
	}
	else
	{
		write(1, "ERROR WARNING EXPLOSION", 23);
	}
	return(0);
}*/
