///////////////////////////////////////////////////////////////////////////////
#include "ls.h"

// Usage: ls [option]... [file]...

/*
**		-l		Long list format. 
**
**		-R		Recursively list subdirectories.
**
**		-a		Include directory entries whose names begin with a dot (.).
**
**		-r		Reverse the order of the sort.
**
**		-t		Sort by time modified before sorting the operands by
**				lexicographical order.
**
**		-u		Use time of last access for sorting (-t) or long printing (-l).
**
**		-f		Output is not sorted. Turns on the -a option.
**
**		-g		Display group name instead of owner when long printing (-l).
**
**		-d		Directories are not searched recursiveley.
*/

void			add_flag(unsigned int *flags, int flag)
{
	const t_flag_map table[] = {{'l', LONG_LIST}, {'R', RECURSIVE}, {'a', ALL},
		{'r', REVERSE}, {'t', SORT_MODIFY}, {'u', ACCESS}, {'f', NO_SORT},
		{'g', NO_OWNER}, {'d', NO_EXPAND_DIR}, {0, 0}};
	int i;

	i = -1;
	while (table[++i].flag)
	{
		if (table[i].flag == flag)
		{
			*flags |= table[i].bit;
			if (flag == 'f')
				*flags |= ALL;
			else if (flag == 'g')
				*flags |= LONG_LIST;
			return ;
		}
	}
}

unsigned int	parse_flags(int argc, char **argv)
{
	unsigned int	flags;
	int				i;

	i = 0;
	while (++i < argc)
	{
		if (argv[i][0] == '-')
			add_flag(&flags, argv[i][1]);
		else
			break ;
	}	
	return (flags);
}
