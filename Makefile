# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 15:57:43 by emimenza          #+#    #+#              #
#    Updated: 2023/10/09 10:47:14 by emimenza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Comandos
AR			=	ar rcs
DEL			=	rm -f
CC			=	gcc
CCFLAGS		=	-Wall -Wextra -Werror

#Nombre ejecutable
NAME		=	libftprintf.a

#Ficheros
SRC			=	ft_printf.c ft_printf_hex.c ft_printf_utils.c ft_printf_ptr.c
OBJ			=	$(SRC:.c=.o)

# REGLAS #
all:	$(NAME)

#Compilar
$(NAME):$(OBJ) 
		@echo "Compiling libft..."
		@make -C ./libft
		@cp libft/libft.a $(NAME)
		@$(AR) $(NAME) $(OBJ)
		@echo "libftprintf compiled!"

# $@ : The file name of the target of the rule. If the target is an archive member, then ‘$@’ is the name of the archive file.
# $< : The name of the first prerequisite.

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

# Eliminar temporales
clean:
	@make clean -C ./libft
	$(DEL) $(OBJ)
	@$(RM) -r $(OBJ_DIR)
	@echo "Objects and directory cleaned!"

fclean: clean
	$(DEL) $(NAME)
	$(DEL) libft/libft.a $(NAME)

re:	fclean all

