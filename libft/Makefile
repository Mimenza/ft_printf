# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 10:09:33 by emimenza          #+#    #+#              #
#    Updated: 2023/09/28 09:16:20 by emimenza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB			=	ar rcs
DEL			=	rm -f
CC			=	gcc
CCFLAGS		=	-Wall -Wextra -Werror
NAME		=	libft.a
SRC			=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c\
				ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c\
				ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
				ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
				ft_putnbr_fd.c

OBJ			=	$(SRC:.c=.o)

SRC_BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
				ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ_BONUS	=	$(SRC_BONUS:.c=.o)
#INCLUDE = libft.h
all:	$(NAME)

$(NAME):$(OBJ) #$(INCLUDE)
		$(LIB) $(NAME) $(OBJ)
# $@ : The file name of the target of the rule. If the target is an archive member, then ‘$@’ is the name of the archive file.
# $< : The name of the first prerequisite.

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<
	
clean:
	$(DEL) $(OBJ) $(OBJ_BONUS)
	
fclean: clean
	$(DEL) $(NAME)
re:	fclean all

bonus: $(OBJ) $(OBJ_BONUS) #$(INCLUDE)
	$(LIB) $(NAME) $(OBJ_BONUS) $(OBJ)
	
clean_bonus: fclean bonus
