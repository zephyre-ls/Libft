/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:54:33 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/28 11:54:35 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*lst = adresse du pointeurs vers le premier element de la liste
new = adresse du pointeur vers l element a rajouter a la liste
return = r
	description = ajoute l element new a la fin de la liste */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*liste;

	liste = *lst;
	if (liste == NULL)
	{
		*lst = new;
		return ;
	}
	while (liste->next && liste != NULL)
	{
		liste = liste->next;
	}
	liste->next = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*content1;
	t_list	*content2;
	t_list	*content3;
	char *s1 = "salut";
	char *s2 = "capitaine";
	char *s3 = "travaille";
	
	t_list *liste = NULL;
	content1 = ft_lstnew(s1);
	content2 = ft_lstnew(s2);
	content3 = ft_lstnew(s3);
	ft_lstadd_back(&liste, content3); 
	ft_lstadd_back(&liste, content1); 
	ft_lstadd_back(&liste, content2); 

//	liste = content1;
	content1->next=content2;
	content2->next=content3;
	content3->next=NULL;
//	liste = content1;
//	ft_lstadd_back(&liste, content2); 
	liste = content1;
	while (liste->next != NULL)
	{
		printf("%s ->", (char *)liste->content);
		liste = liste->next;
	}
	return (0);
}*/
