/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:37:07 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 12:47:12 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
