/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 12:33:08 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 12:54:19 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ra(t_list **lst_a)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (!*lst_a)
		return ;
	if ((*lst_a) && (*lst_a)->next)
	{
		tmp = (*lst_a);
		tmp1 = (*lst_a);
		(*lst_a) = (*lst_a)->next;
		while (tmp1->next)
			tmp1 = tmp1->next;
		tmp->next = NULL;
		tmp1->next = tmp;
	}
}

void	ft_rb(t_list **lst_b)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (!*lst_b)
		return ;
	if ((*lst_b) && (*lst_b)->next)
	{
		tmp = (*lst_b);
		tmp1 = (*lst_b);
		(*lst_b) = (*lst_b)->next;
		while (tmp1->next)
			tmp1 = tmp1->next;
		tmp->next = NULL;
		tmp1->next = tmp;
	}
}

void	ft_rr(t_list **lst_a, t_list **lst_b)
{
	if (!*lst_a && !*lst_b)
		return ;
	ft_ra(&(*lst_a));
	ft_rb(&(*lst_b));
}

void	ft_rra(t_list **lst_a)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if ((*lst_a) && (*lst_a)->next)
	{
		tmp1 = (*lst_a);
		tmp2 = (*lst_a);
		while (tmp2->next->next)
			tmp2 = tmp2->next;
		tmp1 = tmp2->next;
		tmp2->next = NULL;
		tmp1->next = (*lst_a);
		(*lst_a) = tmp1;
	}
}

void	ft_rrb(t_list **lst_b)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if ((*lst_b) && (*lst_b)->next)
	{
		tmp1 = (*lst_b);
		tmp2 = (*lst_b);
		while (tmp2->next->next)
			tmp2 = tmp2->next;
		tmp1 = tmp2->next;
		tmp2->next = NULL;
		tmp1->next = (*lst_b);
		(*lst_b) = tmp1;
	}
}
