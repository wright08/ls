NAME = ft_ls
AR = ar
ARFLAGS = -rcs
CC = gcc
CFLAGS = -Wall -Werror -Wextra
CFLAGS += #-Ofast
CFLAGS += #-g -fsanitize=address
INC = -I inc
SRC_DIR = src
OBJ_DIR = obj

SRC =

OBJ = $(patsubst %, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(INC) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $< 

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
