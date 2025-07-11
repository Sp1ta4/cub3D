/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:11:15 by ggevorgi          #+#    #+#             */
/*   Updated: 2025/06/23 19:06:39 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstsize(t_line *lst)
{
	size_t	length;

	length = 0;
	while (lst)
	{
		++length;
		lst = lst->next;
	}
	return (length);
}
