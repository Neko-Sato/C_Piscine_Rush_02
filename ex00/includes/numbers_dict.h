/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_dict.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 22:36:42 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/25 00:46:53 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

# include "types.h"

typedef struct s_numbers_dict
{
	ULONG	key;
	STRING	value;
}			t_numbers_dict;

//インデントするとノームエラーになる
const t_numbers_dict DEFAULT_DICT[] = {
{.key = 0, .value = "zero"},
{.key = 1, .value = "one"},
{.key = 2, .value = "two"},
{.key = 3, .value = "three"},
{.key = 4, .value = "four"},
{.key = 5, .value = "five"},
{.key = 6, .value = "six"},
{.key = 7, .value = "seven"},
{.key = 8, .value = "eight"},
{.key = 9, .value = "nine"},
{.key = 10, .value = "ten"},
{.key = 11, .value = "eleven"},
{.key = 12, .value = "twelve"},
{.key = 13, .value = "thirteen"},
{.key = 14, .value = "fourteen"},
{.key = 15, .value = "fifteen"},
{.key = 16, .value = "sixteen"},
{.key = 17, .value = "seventeen"},
{.key = 18, .value = "eighteen"},
{.key = 19, .value = "nineteen"},
{.key = 20, .value = "twenty"},
{.key = 30, .value = "thirty"},
{.key = 40, .value = "forty"},
{.key = 50, .value = "fifty"},
{.key = 60, .value = "sixty"},
{.key = 70, .value = "seventy"},
{.key = 80, .value = "eighty"},
{.key = 90, .value = "ninety"},
{.key = 100, .value = "hundred"},
{.key = 1000, .value = "thousand"},
{.key = 1000000, .value = "million"},
{.key = 1000000000, .value = "billion"},
};

#endif