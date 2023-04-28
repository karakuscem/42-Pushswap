# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 03:47:05 by ckarakus          #+#    #+#              #
#    Updated: 2023/04/28 03:47:06 by ckarakus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./src/butterfly_utils.c \
		./src/index.c \
		./src/lst_utils_2.c \
		./src/lst_utils.c \
		./src/number_utils.c \
		./src/parse_stack.c \
		./src/parse_utils.c \
		./src/push_action.c \
		./src/push_swap.c \
		./src/reverse_rotate_action.c \
		./src/rotate_action.c \
		./src/sort.c \
		./src/swap_action.c \
		./src/utils.c \

BSRCS = 

NAME = push_swap
B_NAME = checker
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf
LIBC = ar -rcs

all: $(MLX) $(NAME)

$(NAME): $(SRCS)
	@gcc $(CFLAGS) $(SRCS) -o $(NAME)
	@echo	"	⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣠⣄⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
	@echo	"	⠀⠀⠀⠀⠀⢀⣴⠟⠛⠉⠉⠉⠉⠛⠻⣦⡀⠀⠀⠀⠀⠀⠀";
	@echo	"	⠀⠀⠀⠀⢰⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⡆⠀⠀⠀⠀⠀";
	@echo	"	⠀⠀⠀⠀⣼⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣷⡀⠀⠀⠀⠀";
	@echo	"	⠀⠀⠀⣰⣿⣿⣿⣤⣤⣄⠀⠀⣠⣤⣤⣿⣿⣿⣷⡀⠀⠀⠀";
	@echo	"	⠀⢀⣼⣿⣿⣿⠋⢠⣤⠙⠁⠈⠋⣤⡄⠙⣿⣿⣿⣿⣄⠀⠀";
	@echo	"	⢠⣿⣿⣿⣿⡿⠀⠈⠉⠀⠀⠀⠀⠉⠁⠀⢿⣿⣿⣿⣿⣷⠀";
	@echo	"	⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⡀⢀⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⡆";
	@echo	"	⠹⣿⣿⣿⣿⣿⠀⠀⠴⠞⠁⠈⠳⠦⠀⠀⣿⣿⣿⣿⣿⡿⠁";
	@echo	"	⠀⠉⢻⡿⢿⣿⣧⠀⠀⠀⢶⡶⠀⠀⠀⣼⣿⣿⣿⡟⠋⠁⠀";
	@echo	"	⠀⠀⣼⡇⠀⠀⠙⣷⣄⠀⠈⠁⠀⣠⣾⠋⠀⠀⢸⣧⠀⠀⠀";
	@echo	"	⠀⠀⣿⡇⠀⠀⠀⠈⠛⠷⣶⣶⠾⠛⠁⠀⠀⠀⢸⣿⠀⠀⠀";
	@echo	"	⠀⠀⢻⡇⠀⠀⠀⣀⣀⣤⣤⣤⣤⣀⣀⠀⠀⠀⢸⡟⠀⠀⠀";
	@echo	"	⠀⠀⠘⣿⣴⠾⠛⠋⠉⠉⠉⠉⠉⠉⠛⠛⠷⣦⣿⠃⠀⠀⠀";
	@echo	"	⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀";

bonus : $(BSRCS)
	@gcc $(CFLAGS) $(BSRCS) -o $(B_NAME)
	@echo	"	⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣠⣄⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
	@echo	"	⠀⠀⠀⠀⠀⢀⣴⠟⠛⠉⠉⠉⠉⠛⠻⣦⡀⠀⠀⠀⠀⠀⠀";
	@echo	"	⠀⠀⠀⠀⢰⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⡆⠀⠀⠀⠀⠀";
	@echo	"	⠀⠀⠀⠀⣼⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣷⡀⠀⠀⠀⠀";
	@echo	"	⠀⠀⠀⣰⣿⣿⣿⣤⣤⣄⠀⠀⣠⣤⣤⣿⣿⣿⣷⡀⠀⠀⠀";
	@echo	"	⠀⢀⣼⣿⣿⣿⠋⢠⣤⠙⠁⠈⠋⣤⡄⠙⣿⣿⣿⣿⣄⠀⠀";
	@echo	"	⢠⣿⣿⣿⣿⡿⠀⠈⠉⠀⠀⠀⠀⠉⠁⠀⢿⣿⣿⣿⣿⣷⠀";
	@echo	"	⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⡀⢀⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⡆";
	@echo	"	⠹⣿⣿⣿⣿⣿⠀⠀⠴⠞⠁⠈⠳⠦⠀⠀⣿⣿⣿⣿⣿⡿⠁";
	@echo	"	⠀⠉⢻⡿⢿⣿⣧⠀⠀⠀⢶⡶⠀⠀⠀⣼⣿⣿⣿⡟⠋⠁⠀";
	@echo	"	⠀⠀⣼⡇⠀⠀⠙⣷⣄⠀⠈⠁⠀⣠⣾⠋⠀⠀⢸⣧⠀⠀⠀";
	@echo	"	⠀⠀⣿⡇⠀⠀⠀⠈⠛⠷⣶⣶⠾⠛⠁⠀⠀⠀⢸⣿⠀⠀⠀";
	@echo	"	⠀⠀⢻⡇⠀⠀⠀⣀⣀⣤⣤⣤⣤⣀⣀⠀⠀⠀⢸⡟⠀⠀⠀";
	@echo	"	⠀⠀⠘⣿⣴⠾⠛⠋⠉⠉⠉⠉⠉⠉⠛⠛⠷⣦⣿⠃⠀⠀⠀";
	@echo	"	⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀";

clean:
	@make clean -C

fclean: clean
	@rm -rf $(NAME)
	@make clean -C

re: fclean all

.PHONY: all bonus clean fclean re .c.o