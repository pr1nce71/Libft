# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 16:01:33 by yevkahar          #+#    #+#              #
#    Updated: 2024/11/12 18:17:18 by yevkahar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libft.h

TARGET = libft
CC = gcc

PREF_SRCS = ./src/
PREF_OBJ = ./obj/

SCRS = $(wildcard $(PREF_SRCS)*.c)
OBJ = $(patsubst $(PREF_SRCS)%.c, $(PREF_OBJ)%.o, $(SCRS))

$(TARGET) : $(OBJ)
    $(CC) $(OBJ) -o $(TARGET)

$(PREF_OBJ)%.o : $(PREF_SRCS)%.c
    $(CC) -c $< -o $@



clean :
    rm $(TARGET) $(PREF_OBJ)*.o



# FLAGS = -Wall -Wextra -Werror