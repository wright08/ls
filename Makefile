NAME	= ls
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -Og
CFLAGS	+= -g -fsanitize=address
INC		= -I inc -I libft/inc
SRC_DIR	= src
OBJ_DIR	= obj

SRC = \
	  ls

OBJ = $(patsubst %, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ) libft/libft.a
	@$(CC) $(CFLAGS) $(INC) -o $@ $< libft/libft.a

libft/libft.a:
	@make -sC libft

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $< 

clean:
	@make -sC libft $@
	@rm -rf $(OBJ_DIR)

fclean: clean
	@make -sC libft $@
	@rm -f $(NAME)

re: fclean all
