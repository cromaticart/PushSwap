/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 12:32:53 by cammapou          #+#    #+#             */
/*   Updated: 2018/08/01 17:39:29 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int				main(int ac, char **av)
{
	t_list		*lst;
	int			*tmp;

	if ((error_check(av)) == -1)
	{
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	if ((((tmp = (int*)malloc(sizeof(int *))) == NULL)))
		ft_putendl("Error");
	if (ac > 1)
	{
		*tmp = ft_atoi(av[--ac]);
		lst = ft_lstnew(tmp, sizeof(int));
		while (ac-- > 1)
		{
			*tmp = ft_atoi(av[ac]);
			ft_lstaddend(&lst, ft_lstnew(tmp, sizeof(int)));
		}
		checker(&lst);
		ft_lstdel(&lst, del);
		free(tmp);
	}
	return (0);
}
