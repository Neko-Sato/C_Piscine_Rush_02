/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   joinkey.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:34:56 by tsishika          #+#    #+#             */
/*   Updated: 2023/03/25 17:26:36 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_split.h"
#include "ft_strjoin.h"
#include <stdlib.h>

char	*join_key(char *str)
{
	char	*charset;
	char	**ans;
	char	*sep;
	char	*joined_str;
	int		count;

	charset = " 	";
	ans = ft_split(str, charset, &count);
	sep = " ";
	joined_str = ft_strjoin(count - 2, &ans[2], sep);
	free(ans);
	return (joined_str);
}

// #include <stdio.h>

// int main(void){
//   char *str;
//   str = join_key("20 : hey everybody !");

//   printf("%s\n", str);
//   free(str);
//   return (0);
// }