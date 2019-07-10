/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhspace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkryvono <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 14:26:54 by vkryvono          #+#    #+#             */
/*   Updated: 2019/03/30 14:26:57 by vkryvono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iswhspace(int c)
{
	return ((c == ' ') || (c == '\t') || (c == '\n') ||
			(c == '\v') || (c == '\f') || (c == '\r'));
}
