#ifndef FT_LIST_H
# define FT_LIST_H

// それぞれの値をmallocする
typedef struct s_list
{
	struct s_list	*next;
	unsigned int	*data;
	char			*key;
}					t_list;
#endif
