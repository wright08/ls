#ifndef LS_H
# define LS_H

# include "libft.h"

// l R a r t u f g d
# define LONG_LIST		(1U)
# define RECURSIVE		(1U << 1)
# define ALL			(1U << 2)
# define REVERSE		(1U << 3)
# define SORT_MODIFY	(1U << 4)

# define ACCESS			(1U << 5)
# define NO_SORT		(1U << 6)
# define NO_OWNER		(1U << 7)
# define NO_EXPAND_DIR	(1U << 8)

struct s_flag_map
{
	char			flag;
	unsigned int	bit;
};
typedef struct s_flag_map	t_flag_map;

unsigned int parse_flag(int argc, char **argv);


#endif
