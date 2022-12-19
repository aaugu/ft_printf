# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaugu <aaugu@student.42lausanne.ch>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 09:42:59 by aaugu             #+#    #+#              #
#    Updated: 2022/12/19 09:43:00 by aaugu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c print_c.c print_s.c print_p.c print_int.c print_u.c print_x.c

OBJ_DIR = objs
OBJS = ${SRCS:%.c=${OBJ_DIR}/%.o}

LIBFT_PATH = ./libft
LIBFT = ${LIBFT_PATH}/libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -rf

$(OBJ_DIR)/%.o:	%.c
				$(CC) $(CFLAGS) -c $< -o $@

all:			${NAME}

bonus:			all

${NAME}:		$(LIBFT) ${OBJ_DIR} $(OBJS)
				cp $(LIBFT) $(NAME)
				$(AR) $(NAME) $(OBJS)

${LIBFT}:
				make -C $(LIBFT_PATH) all

${OBJ_DIR}:
				mkdir ${OBJ_DIR}

clean:
				make -C ${LIBFT_PATH} clean
				${RM} ${OBJ_DIR}

fclean: 		clean
				make -C $(LIBFT_PATH) fclean
				${RM} ${NAME}

re: 			fclean all

.PHONY:			all bonus clean fclean re
