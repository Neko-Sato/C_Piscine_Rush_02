#ifndef FT_SPLIT_H
# define FT_SPLIT_H

int	is_charset(char c, char *charset);
void	get_words(char *str, char *charset, int *word_count);
int	ft_strlen_sep(char *str, char *charset);
char	*assign_words(char *str, char *charset);
char	**ft_split(char *str, char *charset, int *count);

#endif