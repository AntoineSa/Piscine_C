# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sikpenou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/20 18:36:45 by sikpenou          #+#    #+#              #
#    Updated: 2019/02/24 16:55:56 by sikpenou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ./includes/rush02.h
SRCS = ./srcs/main.c ./srcs/parser.c ./srcs/generate.c ./srcs/compare.c \
	   ./srcs/toolbox.c
NAME = colle-2
OBJS = $(SRCS:.c=.o)
OBJS_ = $(notdir $(OBJS))

all : $(NAME)

$(NAME) : $(OBJS_)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS_)

$(OBJS_) : $(SRCS) $(INCLUDES)
	$(CC) $(CFLAGS) -c -I $(INCLUDES) $(SRCS)

clean :
	rm -f $(OBJS_)

fclean : clean
	rm -f $(NAME)

re : fclean all
