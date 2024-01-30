# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 08:58:31 by nle-roux          #+#    #+#              #
#    Updated: 2024/01/30 09:46:55 by nle-roux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang
CFLAGS	= -Wall -Wextra -Werror -g
NAME	= philo

# -- files -- #
M_DIR = mandatory/srcs/

MANDATORY	= 	main \

SRCS_M	=  $(addprefix $(M_DIR), $(addsuffix .c, $(MANDATORY)))

OBJS_M	= $(SRCS_M:.c=.o)

# --rules -- #
%.o: %.c
	@/usr/bin/echo -ne "Compiling PHILOSOPHER -> $<..."\\r
	@$(CC) $(CFLAGS) -Imandatory/includes -c $< -o $@

$(NAME): $(OBJS_M)
	@/usr/bin/echo -e "\nDone"
	$(CC) $(CFLAGS) $(OBJS_M) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS_M)

fclean:
	rm -f $(OBJS_M) $(NAME)

re: fclean all

.PHONY: all clean fclean re
