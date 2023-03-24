/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 22:16:42 by toshota           #+#    #+#             */
/*   Updated: 2023/03/25 01:10:49 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// argv[2]をlong longのポインタに変換する
// エラー発生時にはNULLを返す（strが0のとき、0が格納されたポインタが変えるため、str＝0とNULLは区別できる）
long long	*ft_atoll(const char *str)
{
	long long	*result;

	result = malloc(sizeof(long long *));
	if (!(result))
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		*result *= 10;
		*result += *str - '0';
		str++;
	}
	if (*str == '.')
		return (0);
	if (*result >= (1ul << 32))
		return (0);
	return (result);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	long long	*llargv;
// 	long long	*unsigned_int_max;
// 	long long	*negative;
// 	long long	*small;
// 	long long	*over_unsigned_int;

// 	llargv = 0;
// 	if(argc >= 3)
// 		llargv        = ft_atoll(argv[2]);
// 	unsigned_int_max  = ft_atoll("4294967295");
// 	negative          = ft_atoll("-42");
// 	small             = ft_atoll("42.195");
// 	over_unsigned_int = ft_atoll("4294967296");
// 	if (llargv != NULL)
// 		printf("llargv            : %lld\n", *llargv);
// 	else
// 		printf("llargv            : NULL\n");
// 	if (unsigned_int_max != NULL)
// 		printf("unsigned_int_max  : %lld\n", *unsigned_int_max);
// 	else
// 		printf("unsigned_int_max  : NULL\n");
// 	if (negative != NULL)
// 		printf("negative          : %lld\n", *negative);
// 	else
// 		printf("negative          : NULL\n");
// 	if (small != NULL)
// 		printf("small             : %lld\n", *small);
// 	else
// 		printf("small             : NULL\n");
// 	if (over_unsigned_int != NULL)
// 		printf("over_unsigned_int : %lld\n", *over_unsigned_int);
// 	else
// 		printf("over_unsigned_int : NULL\n");
// 	return (0);
// }
