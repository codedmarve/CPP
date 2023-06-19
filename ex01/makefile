# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/18 20:29:27 by moduwole          #+#    #+#              #
#    Updated: 2023/06/18 20:29:27 by moduwole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

SRC		=	main.cpp ./src/Contact.cpp ./src/PhoneBook.cpp

CC		=	c++

CFLAGS =  -Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all