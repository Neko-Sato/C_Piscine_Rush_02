/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 21:18:23 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/24 21:43:49 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# define ULONG long long;
# define STRING *char

typedef struct s_numbers_dict	
{
	STRING	key;
	ULONG	valus;
}			t_numbers_dict;

#endif