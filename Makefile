# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nle-roux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 08:58:31 by nle-roux          #+#    #+#              #
#    Updated: 2024/01/30 10:42:54 by nle-roux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang
CFLAGS	= -Wall -Wextra -Werror -g
NAME	= philo

# -- files -- #
M_DIR = mandatory/

MANDATORY	= 	mini_libft/ft_putchar_fd \
				mini_libft/ft_putstr_fd \
				mini_libft/ft_putendl_fd \
				mini_libft/ft_atoi \
				mini_libft/ft_isspace \
				mini_libft/ft_isdigit \
				srcs/main \
				srcs/program_utilities \

SRCS_M	=  $(addprefix $(M_DIR), $(addsuffix .c, $(MANDATORY)))

OBJS_M	= $(SRCS_M:.c=.o)

# --rules -- #
%.o: %.c
	@/usr/bin/echo -ne "Compiling PHILOSOPHER -> $<..."\\r
	@$(CC) $(CFLAGS) -Imandatory/includes -Imandatory/mini_libft -c $< -o $@

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
