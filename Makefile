# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 16:01:33 by yevkahar          #+#    #+#              #
#    Updated: 2024/11/13 14:13:24 by yevkahar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# TARGET = libft

CC = gcc
FLAGS = -Wall -Wextra -Werror

PREF_SRCS = ./src/
PREF_OBJ = ./obj/
PREF_INC = ./libft/

SCRS = $(wildcard $(PREF_SRCS)*.c)
OBJ = $(patsubst $(PREF_SRCS)%.c, $(PREF_OBJ)%.o, $(SCRS))

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(TARGET) : $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

$(PREF_OBJ)%.o : $(PREF_SRCS)%.c
	$(CC) $(FLAGS) -I $(PREF_INC) -c $< -o $@

clean :
	rm $(TARGET) $(PREF_OBJ)*.o
	
fclean : clean
	rm -f $(NAME)
	
re : fclean $(NAME)
