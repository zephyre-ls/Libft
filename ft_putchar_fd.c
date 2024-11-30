/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:34:19 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/13 16:35:38 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
fd = file descriptor est un entier positif qui fait reference a un fichier ouvert
par un processus (= programme encours d execution) 
fichier = pas forcement un txt, ppe aussi un periph d entree sortie 
(clavier ou ecran) ou un pipe, une socket reseau. 
3 fd differences =  0 (entree standard), 
										1 (sortie standard°
										2 (erreur standard)
*/
#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include "libft.h"

int main()
{
    char c = 'A';

    // Teste la fonction ft_putchar_fd avec la sortie standard (fd = 1)
    ft_putchar_fd(c, 1);

    // Teste la fonction ft_putchar_fd avec la sortie d'erreur (fd = 2)
    ft_putchar_fd(c, 2);

    return 0;
}

#include "libft.h"
#include <fcntl.h> // pour open
#include <unistd.h>

int main()
{
    char c = 'A';
    int fd;

    // Ouvre (ou crée) un fichier texte en mode écriture (O_WRONLY),
		// en le créant s'il n'existe pas (O_CREAT),
    // et en le tronquant à zéro (O_TRUNC) si le fichier existe déjà.
    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) // Vérifie si l'ouverture du fichier a échoué
    {
        write(2, "Erreur d'ouverture du fichier\n", 30);
        return 1;
    }

    // Teste la fonction ft_putchar_fd avec le descripteur de fichier
    ft_putchar_fd(c, fd);

    // Ferme le fichier après utilisation
    close(fd);

    return 0;
}*/
