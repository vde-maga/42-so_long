# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/05 18:37:54 by vde-maga          #+#    #+#              #
#    Updated: 2025/08/19 14:25:37 by vde-maga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ---------------------- Variables ---------------------------------------------

# Executables
NAME          = so_long
NAME_BONUS    = so_long_bonus

# Commands
CC            = cc
RM            = rm -f

# Directorys
SRC_DIR       = srcs
OBJ_DIR       = objs
INC_DIR       = includes
MLX_DIR       = minilibx-linux

# Compiling Flags
CFLAGS        = -Wall -Wextra -Werror -I$(INC_DIR) -I$(MLX_DIR)

# MLX Include
# -L Dir of MLX
# -l Linking the Library
# -lm Mathematic Library, if Necessary
LDFLAGS       = -L$(MLX_DIR) -lmlx -lXext -lX11 -lm

# SRCs Find
SRCS          = $(shell find $(SRC_DIR) -name "*.c")

# OBJs
OBJS          = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# MiniLibX Library
MLX_LIB       = $(MLX_DIR)/libmlx.a

# Colors
GREEN         = \033[0;32m
RED           = \033[0;31m
YELLOW        = \033[0;33m
CYAN          = \033[0;36m
RESET         = \033[0m

# ---------------------- Default -----------------------------------------------

all: $(NAME)

# ---------------------- Linking -----------------------------------------------

$(NAME): $(OBJS) $(MLX_LIB)
	@echo ""
	@echo "$(YELLOW)Linking Object Files to make $(NAME)...$(RESET)"
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)
	@echo "$(GREEN)Done! Execute ./$(NAME)$(RESET)"

# ---------------------- Compiling ---------------------------------------------

# MiniLibX Compiling
$(MLX_LIB):
	@echo "$(CYAN)Compiling MiniLibX...$(RESET)"
	@make -sC $(MLX_DIR)
	@echo "$(GREEN)Done!$(RESET)"

# Compiling my Program
# .c to .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo  "$(CYAN)\n Compiling $(RESET)"
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@
	@echo  "$(GREEN) Done Compiling $(RESET)"

# ---------------------- Cleaning ----------------------------------------------

clean:
	@echo  "$(CYAN)\n Cleaning Object Files $(RESET)"
	@$(RM) -r $(OBJ_DIR)
	@make -sC $(MLX_DIR) clean
	@echo  "$(GREEN) Done Cleaning Object Files $(RESET)"

fclean: clean
	@echo "$(RED)Removing executables...$(RESET)"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
