/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:40:42 by olaaroub          #+#    #+#             */
/*   Updated: 2023/12/01 18:26:29 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p, char c)
{
	int	cmp;

	cmp = 0;
	cmp += write(1, "0x", 2);
	return (cmp + ft_putptr_base((unsigned long)p, 16, c));
}
