/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:44:42 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/26 21:44:46 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
content = le contenu du nouvel element
retour = le nouvel element
description = alloue et renvoie un nouvel element, la variable 'content'
est initialise a l aide de la valeur du parametre 'content', variable'next" 
est initialise a NULL
Liste chaine = differents elements (= noeud), un noeud = les donnnes stock 
et un pointeur -> vers le noeuds suivant
!= avec un tableau = elements ne sont pas stockes dans des emplacements 
contigus en memoire.
PLus facile de supp add sans avoir a deplacer tous le reste + liste 
chaine les cases ne sont pas cote a cote en memoire
ex [10|*] --> [20|*] --> [30|NULL] NULL indique fin de liste
*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (malloc(sizeof(t_list)));
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
/*#include <stdio.h>

int	main	(void)
{
	char	*content = "salut capitaine";
	printf("%s", (char *)ft_lstnew(content)->content);
	return(0);
}*/
