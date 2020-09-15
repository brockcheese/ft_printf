# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpace <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/29 22:50:43 by bpace             #+#    #+#              #
#    Updated: 2019/08/30 13:28:09 by bpace            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/*.c \

NAME = libftprintf.a

all: $(NAME)

$(NAME):
	@make -C libft re
	@gcc -c -Wall -Werror -Wextra $(SRC)
	@mv *.o srcs/
	@ar rc libftprintf.a srcs/*.o libft/*.o

clean:
	@make -C libft clean
	@/bin/rm -f srcs/*.o

fclean: clean
		@/bin/rm -f $(NAME) libft/libft.a

re: fclean all
