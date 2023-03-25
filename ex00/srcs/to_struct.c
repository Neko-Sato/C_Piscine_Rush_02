/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:42:08 by toshota           #+#    #+#             */
/*   Updated: 2023/03/25 20:52:24 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "to_struct.h"

//  argvを構造体に入れる
t_kozo to_struct(char **argv)
{
    t_kozo kozo;
    kozo.key = join_key(argv[1]);
    kozo.value = ft_atoll(argv[2]);
    return kozo;
}