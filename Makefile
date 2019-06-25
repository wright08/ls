NAME	= lsa
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
CFLAGS	+= -g -fsanitize=address
INC		= -I src -I libft/inc
SRC_DIR	= src
OBJ_DIR	= obj

SRC = \
	  parse\
	  main

OBJ = $(patsubst %, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ) libft/libft.a
	@$(CC) $(CFLAGS) -o $@ $^

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
