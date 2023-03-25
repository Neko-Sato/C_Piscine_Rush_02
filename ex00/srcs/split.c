/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:07:16 by tsishika          #+#    #+#             */
/*   Updated: 2023/03/25 16:55:01 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_split.h"
#include <stdlib.h>

// 今見ている文字が区切り文字であるかを調べる
int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

// 単語数（配列）の数を求める
void	get_words(char *str, char *charset, int *word_count)
{
	int		in_word;
	char	*c;

	in_word = 0;
	while (*str)
	{
		c = charset;
		while (*c != '\0')
		{
			if (*str == *c)
			{
				if (in_word && (*word_count)++ != 0)
					in_word = 0;
				break ;
			}
			c++;
		}
		if (*c == '\0')
			in_word = 1;
		str++;
	}
	if (in_word)
		(*word_count)++;
}

// 各単語の文字数を求める
int	ft_strlen_sep(char *str, char *charset)
{
	int	word_len;

	word_len = 0;
	while (str[word_len] && !is_charset(str[word_len], charset))
		word_len++;
	return (word_len);
}

// 単語を代入する
char	*assign_words(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	word = (char *)malloc(sizeof(char) * (ft_strlen_sep(str, charset) + 1));
	while (i < ft_strlen_sep(str, charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

/**文字列にある各文字に応じて、文字列を分割する
 *
 * 処理手順
 * 単語数（配列）の数を求める
 * ダブルポインタを確保する
 * 配列に単語を代入し（assign_words）、配列の最後には0を入れる
 *
 */
char	**ft_split(char *str, char *charset, int *count)
{
	int		word_count;
	char	**array;
	int		i;

	i = 0;
	word_count = 0;
	array = NULL;
	get_words(str, charset, &word_count);
	array = (char **)(malloc(sizeof(char *) * (word_count + 1)));
	*count = word_count;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str)
			array[i++] = assign_words(str, charset);
		while (*str && !is_charset(*str, charset))
			str++;
	}
	array[i] = 0;
	return (array);
}

// #include <stdio.h>

// int    main(void)
// {
//     char    *str;
//     char    *charset;
//     char    **ans;
// 	int count;

//     str = "20 : hey everybody !";
//     charset = " 	";
//     ans = ft_split(str, charset, &count);
//     printf("0: %s\n", ans[0]);
//     printf("1: %s\n", ans[1]);
//     printf("2: %s\n", ans[2]);
//     printf("3: %s\n", ans[3]);
//     printf("4: %s\n", ans[4]);
// }