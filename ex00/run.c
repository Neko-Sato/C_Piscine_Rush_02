/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:21:55 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/25 00:05:35 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"
#include <stdlib.h>
#include <unistd.h>

/*
 * 実行を書くファイルです
 * 引数が1の場合デフォルトの辞書を生成します
 * 引数が2の場合pathから辞書型を生成します
 *
 * また、引数の文字列から数値に変換します
 *
 * どちらも不正な値ならばNULLを返しプログラムを終了させます
 * NULL以外が返ってきたら関数に値を渡します
 */

int	main(int argc, STRING argv[])
{
	t_numbers_dict	*dict;
	ULONG			*num;

	dict = NULL;
	num = NULL;
	if (argc == 2)
	{
		dict = &DEFAULT_DICT;
		num = ft_atoll(argv[1]);
	}
	else if (argc == 3)
	{
		dict = create_dict(argv[1]));
		num = ft_atoll(argv[2]);
	}
	if (!num)
		write(STDOUT_FILENO, "Error\n", 6);
	else if (!dict)
		write(STDOUT_FILENO, "Dict Error\n", 11);
	else
	{
		rush_02(*dict, *num);
		free(dict);
		free(num);
	}
}
