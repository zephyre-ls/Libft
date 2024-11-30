/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:42:58 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/28 10:43:00 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*lst= debut de la liste
* return = dernier element de la liste
* renvoie le dernier element de la liste
*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	i = 0;
	if (lst != NULL)
	{
		while (lst->next != NULL)
		{
			lst = lst->next;
			i++;
		}
		return (lst);
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{

	t_list *list = NULL;
	t_list *content1;
	t_list *content2;
	char	*s1 = "hey";
	char	*s2 = "cava";

	t_list	*result;

	content1 = ft_lstnew(s1);
	content2 = ft_lstnew(s2);

	list = content1;
	content1->next = content2;
	content2->next = NULL;

	result = ft_lstlast(list);

	printf("%s", (char *)result->content);
	return (0);
}*/
