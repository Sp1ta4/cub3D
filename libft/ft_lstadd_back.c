/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:50:22 by ggevorgi          #+#    #+#             */
/*   Updated: 2025/06/23 19:06:59 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_line **lst, t_line *new)
{
	t_line	*lstcpy;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	lstcpy = *lst;
	while (lstcpy->next)
		lstcpy = lstcpy->next;
	lstcpy->next = new;
}
