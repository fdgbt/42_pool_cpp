# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/29 19:19:08 by fdagbert          #+#    #+#              #
#    Updated: 2021/03/29 19:19:09 by fdagbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

END=\x1b[0m
RESET=\033[0m
BLACK=\033[0;30m
RED=\033[0;31m
GREEN =\033[32m
YELLOW=\033[0;33m
BLUE=\033[0;34m
PURPLE=\033[0;35m
CYAN=\033[0;36m
WHITE=\033[0;37m

NAME = convert

SRC_PATH = .
LIB_PATH = lib
OBJ_PATH = obj
INC_PATH = inc

CONV_FCT = main.cpp
CONV_SRC = $(addprefix $(SRC_PATH)/,$(CONV_FCT))

CONV_OBJ = $(CONV_FCT:.cpp=.o)
CONV_OBJ_SRC = $(addprefix $(OBJ_PATH)/,$(CONV_OBJ))

OBJECTS = $(CONV_OBJ_SRC)

CC = clang++
CFLAGS = -Wall -Wextra -Werror

INCLUDES = $(INC_PATH)
INC_CC = $(foreach DIR,$(INCLUDES),-I$(DIR))

.PHONY: all, clean, fclean, re

all:
	@printf "$(YELLOW)"
	@$(MAKE) $(NAME)
	@printf "$(RESET)"

$(NAME): $(OBJECTS)
	@printf "$(PURPLE)Compiling... $(RESET)"
	@$(CC) -o $(NAME) $(OBJECTS) $(INC_CC)
	@printf "$(GREEN)$(NAME) is ready ! ✓\n$(YELLOW)"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@printf "$(PURPLE)Compiling... $<$(RESET)"
	@$(CC) -g $(CFLAGS) $(INC_CC) -o $@ -c $<
	@printf "$(PURPLE) OK\n$(RESET)"

clean:
	@printf "$(RED)"
	@rm -fv $(OBJECTS)
	@rm -rf $(OBJ_PATH) 2> /dev/null || true
	@printf "$(RESET)"

fclean: clean
	@printf "$(RED)"
	@rm -fv $(NAME)
	@printf "$(RESET)"

re: fclean all
