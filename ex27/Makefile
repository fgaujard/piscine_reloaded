# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 13:20:40 by fgaujard          #+#    #+#              #
#    Updated: 2018/11/12 13:12:39 by fgaujard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CC_FlAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SRC = *.c
OBJ = *.o

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(SRC) -o $(NAME) $(CC_FLAGS)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
