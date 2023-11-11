/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:08:57 by mkadri            #+#    #+#             */
/*   Updated: 2023/11/11 19:03:52 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PRINTF_H
# define PRINTF_H

#include "./libft/libft.h"
#include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>


int	ft_printf(const char *str, ...);

#endif