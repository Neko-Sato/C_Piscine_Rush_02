#ifndef FT_STRJOIN_H
# define FT_STRJOIN_H

int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int	get_total_len(char **strings, int size, int sep_length);
char	*ft_strjoin(int size, char **strs, char *sep);

#endif