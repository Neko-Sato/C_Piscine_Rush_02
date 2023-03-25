/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:30:41 by tsishika          #+#    #+#             */
/*   Updated: 2023/03/25 16:51:10 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_split.h"
#include "ft_strjoin.h"
#include <stdlib.h>

// 文字列の長さを調べる
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// 文字列をコピーする
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// ft_strjoin関数の中で使用される、連結後の文字列の全体の長さを計算する
int	get_total_len(char **strings, int size, int sep_length)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strings[i]);
		total_len += sep_length;
		i++;
	}
	total_len -= sep_length;
	return (total_len);
}

// epを各文字列の間に挟み、strs配列にあるすべての文字列を連結する
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*joined_str;
	char	*joined_str_end;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	joined_str = (char *)malloc((get_total_len(strs, size, ft_strlen(sep)) + 1)
			* sizeof(char));
	joined_str_end = joined_str;
	if (!joined_str_end)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(joined_str_end, strs[i]);
		joined_str_end += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(joined_str_end, sep);
			joined_str_end += ft_strlen(sep);
		}
		i++;
	}
	*joined_str_end = '\0';
	return (joined_str);
}

// #include <stdio.h>

// int    main(void)
// {
//     int        size;
//     int        i;
//     char    **strs;
//     char    *sep;

//     size = 3;
//     i = 0;
//     sep = " ";
//     strs = (char **)malloc(sizeof(char) * size);
//     while (i < size)
//     {
//         strs[i] = (char *)malloc(sizeof(char) * 10);
//         i++;
//     }
//     strs[0] = "hey";
//     strs[1] = "everybody";
//     strs[2] = "!";
//     printf("%s\n", ft_strjoin(size, strs, sep));
// }