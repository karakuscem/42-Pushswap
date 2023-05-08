# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 03:47:05 by ckarakus          #+#    #+#              #
#    Updated: 2023/05/08 21:26:43 by ckarakus         ###   ########.fr        #
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

BSRCS = ./bonus/checker_bonus.c \
		./bonus/gnl_bonus.c \
		./bonus/gnl_utils_bonus.c \
		./bonus/push_action_bonus.c \
		./bonus/reverse_rotate_action_bonus.c \
		./bonus/rotate_action_bonus.c \
		./bonus/swap_action_bonus.c \
		./bonus/read_instructions_bonus.c \
		./bonus/parse_stack_bonus.c \
		./bonus/parse_utils_bonus.c \
		./bonus/lst_utils_bonus.c \
		./bonus/number_utils_bonus.c \
		./bonus/utils_bonus.c \
		./bonus/lst_utils_2_bonus.c \

NAME = push_swap
B_NAME = checker
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIBC = ar -rcs
OBJS = ${SRCS:.c=.o}
BOBJS = $(BSRCS:.c=.o)

all: $(MLX) $(NAME)

$(NAME): $(SRCS) ${OBJS}
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

bonus : $(BSRCS) ${BOBJS}
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

fclean : clean
	${RM} ${NAME} ${B_NAME}

clean :
	${RM} ${OBJS} ${BOBJS}

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

re: fclean all 

.PHONY: all bonus clean fclean re .c.o