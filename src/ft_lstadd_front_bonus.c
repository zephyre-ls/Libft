/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:45:09 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/26 21:45:15 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*lst = adresse du pointeurs vers le 1er element de la liste
new = adresse du pointeur vers l element a rajouter a la liste
descritpion = ajouter element nez au debut de la liste
Ajout d un element(new) au debut d une liste chaine.
*lst = premier element actuellement  **lst sans double pointeur pas de 
mofication possible de la liste d origine
lst -> new -> next
*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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
	ft_lstadd_front(&liste, content3); 
	ft_lstadd_front(&liste, content1); 
	ft_lstadd_front(&liste, content2); 

	liste = content1;
	content1->next=content2;
	content2->next=content3;
	content3->next=NULL;
	liste = content1;
	while (liste != NULL)
	{
		printf("%s ->", (char *)liste->content);
		liste = liste->next;
	}
	return (0);
}*/
