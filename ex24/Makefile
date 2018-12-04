# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 12:30:54 by fgaujard          #+#    #+#              #
#    Updated: 2018/11/09 15:52:16 by fgaujard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror 
NAME = libft.a
SRC = srcs/*.c
OBJ = *.o
INCLUDES = includes/*.h

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) -c $(SRC) $(CC_FLAGS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
