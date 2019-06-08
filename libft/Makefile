NAME	= libft.a
AR		= ar
ARFLAGS	= -rcs
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
CFLAGS	+= #-Ofast
CFLAGS	+= #-g -fsanitize=address
INC		= -I inc
SRC_DIR	= src
OBJ_DIR	= obj

#	CTYPE
SRC = \
	  ctype/ft_isalnum\
	  ctype/ft_isalpha\
	  ctype/ft_isascii\
	  ctype/ft_isdigit\
	  ctype/ft_isprint\
	  ctype/ft_isspace\
	  ctype/ft_toupper\
	  ctype/ft_tolower

#	MATH
SRC += \
	   math/ft_pow

#	STDLIB
SRC += \
	  stdlib/ft_atoi\
	  stdlib/ft_itoa\
	  stdlib/ft_lltoa\
	  stdlib/ft_ulltoa_base\
	  stdlib/ft_memalloc

#	STRING
SRC += \
	  string/ft_memchr\
	  string/ft_memcmp\
	  string/ft_memcpy\
	  string/ft_memccpy\
	  string/ft_memmove\
	  string/ft_memset\
	  string/ft_strcat\
	  string/ft_strlcat\
	  string/ft_strncat\
	  string/ft_strchr\
	  string/ft_strrchr\
	  string/ft_strcmp\
	  string/ft_strncmp\
	  string/ft_strcpy\
	  string/ft_strlcpy\
	  string/ft_strncpy\
	  string/ft_strdup\
	  string/ft_strstr\
	  string/ft_strnstr\
	  string/ft_strlen\
	  string/ft_strnew\
	  string/ft_strjoin\
	  string/ft_strsplit\
	  string/ft_strsub\
	  string/ft_strtrim

#	STDIO
SRC += \
	  stdio/ft_putchar\
	  stdio/ft_putchar_fd\
	  stdio/ft_putendl\
	  stdio/ft_putendl_fd\
	  stdio/ft_putnbr\
	  stdio/ft_putnbr_fd\
	  stdio/ft_putstr\
	  stdio/ft_putstr_fd\
	  stdio/get_next_line\
	  stdio/printf/float\
	  stdio/printf/int\
	  stdio/printf/chr_str_ptr_mod\
	  stdio/printf/uint\
	  stdio/printf/utils\
	  stdio/printf/ft_printf\
	  stdio/printf/parse

#	VECTOR
SRC += \
	   vector/vector_add\
	   vector/vector_delete\
	   vector/vector_free\
	   vector/vector_get\
	   vector/vector_new\
	   vector/vector_resize\
	   vector/vector_set

OBJ = $(patsubst %, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $@ $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $< 

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
