/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:31:21 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/06 09:32:11 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#ifndef LIBFT_H
#define LIBFT_H

int	ft_isalpha(int i); 
int	ft_isdigit(int i);
int	ft_isalnum(int i);
int	ft_isascii(int i);
int	ft_isprint(int c);
size_t	ft_strlen(const char *c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n); 






#endif 
