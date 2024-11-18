# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 16:01:33 by yevkahar          #+#    #+#              #
#    Updated: 2024/11/18 16:47:53 by yevkahar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   libft.a
SRCS	=	ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_atoi.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_bzero.c \
			ft_strlen.c \
			ft_strlcat.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strjoin.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c
			
			
			
			
OBJS	= $(SRCS:.c=.o)

RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .

.c.o :
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I$(INCS)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS) 

all: $(NAME)

fclean: clean
	$(RM) $(NAME) $(bonus)

clean:
	$(RM) -f $(OBJS)

re: fclean all


# TARGET = libft

# SRCS_DIR = src
# OBJ_DIR = obj
# INC_DIR = inc

# SCRS = $(wildcard $(SRCS_DIR)*.c)
# OBJ = $(patsubst $(SRCS_DIR)%.c, $(OBJ_DIR)%.o, $(SCRS))


# $(OBJ_DIR)%.o : $(SRCS_DIR)%.c
# 	$(CC) $(FLAGS) -I $(INC_DIR) -c $< -o $@

# $(NAME) : $(OBJ)
# 	ar rcs $(NAME) $(OBJ)

# clean :
# 	rm $(OBJ_DIR)*.o
	
# fclean : clean
# 	rm -f $(NAME)
	
# re : fclean $(NAME)

# .PHONY: all bonus clean fclean re .c.o

# $(TARGET) : $(OBJ)
# 	$(CC) $(OBJ) -o $(TARGET)
