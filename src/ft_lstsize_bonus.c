/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:47:45 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/27 10:47:47 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (i);
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*#include <stdio.h>

int	main(void)
{	
	t_list	*list = NULL;
	t_list	*content1;
	t_list	*content2;
	t_list	*content3;
	char	*s1 = "a";
	char	*s2 = "b";
	char	*s3 = "c";
	int		result;

	content1 = ft_lstnew(s1);
	content2 = ft_lstnew(s2);
	content3 = ft_lstnew(s3);

	list = content1;
	content1->next = content2;
	content2->next = content3;
	content3->next = NULL;

	result = ft_lstsize(list);

	printf("%d", result);
	return (0);
}*/
