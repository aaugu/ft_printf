# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 12:56:54 by aaugu             #+#    #+#              #
#    Updated: 2022/12/08 10:26:56 by aaugu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_utils.c

OBJS = ${SRCS:.c=.o}

LIBFT_PATH = ./libft
LIBFT = ${LIBFT_PATH}/libft.a

GCC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

.c.o:
			${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: 		${NAME}

bonus:		all

${NAME}:	$(LIBFT) $(OBJ_DIR) $(OBJS)
			cp	$(LIBFT) $(NAME)
			$(AR) $(NAME) $(OBJS)

${LIBFT}:
			make -C $(LIBFT_PATH) all

clean:
			make -C ${LIBFT_PATH} clean
			${RM} ${OBJS}

fclean: 	clean
			make -C $(LIBFT_PATH) fclean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re
