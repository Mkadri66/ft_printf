# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkadri <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 20:28:18 by mkadri            #+#    #+#              #
#    Updated: 2023/11/08 20:37:25 by mkadri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

LIBFT_PATH		= ./libft
LIBFT			= ${LIBFT_PATH}/libft.a

SRCS			= ft_printf.c