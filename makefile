# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfleritt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 12:38:40 by rfleritt          #+#    #+#              #
#    Updated: 2024/09/30 13:40:38 by rfleritt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -c

SRC = ft_atoi ft_isascii ft_memcpy ft_strlcpy ft_tolower ft_strtrim \
ft_bzero ft_isdigit ft_memmove ft_strlen ft_toupper ft_split \
ft_calloc ft_isprint ft_memset ft_strncmp ft_strdup \
ft_isalnum ft_memchr ft_strchr ft_strnstr ft_substr \
ft_isalpha ft_memcmp ft_strlcat ft_strrchr ft_strjoin \

OBJ = $(SRC:.c=.o)

INCLUDE = libft.h

AR = ar -rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o ${<:.C=.O}

clean:
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
