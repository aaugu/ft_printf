# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 12:56:54 by aaugu             #+#    #+#              #
#    Updated: 2022/12/09 16:19:03 by aaugu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_utils.c

OBJ_DIR = objs
OBJS = ${SRCS:%.c=${OBJ_DIR}/%.o}

LIBFT_PATH = ./libft
LIBFT = ${LIBFT_PATH}/libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm
RF = -rf

$(OBJ_DIR)/%.o:	%.c
				$(CC) $(CFLAGS) -c $< -o $@

all:			${NAME}

bonus:			all

${NAME}:		$(LIBFT) ${OBJ_DIR} $(OBJS)
				cp	$(LIBFT) $(NAME)
				$(AR) $(NAME) $(OBJS)

${LIBFT}:
				make -C $(LIBFT_PATH) all

${OBJ_DIR}:
				mkdir ${OBJ_DIR}

clean:
				make -C ${LIBFT_PATH} clean
				${RM} ${RF} ${OBJ_DIR}

fclean: 		clean
				make -C $(LIBFT_PATH) fclean
				${RM} ${NAME}

re: 			fclean all

.PHONY:			all bonus clean fclean re
