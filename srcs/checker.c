/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 11:43:40 by passef            #+#    #+#             */
/*   Updated: 2018/02/06 15:53:25 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		handle_error(t_env *e)
{
	return (1);
}

int		main(int argc, char **argv)
{
	t_env	*e;

	e = init_e(argc, argv);
	if (argc > 1)
	{
		if(!(handle_error(e)))
			return (0);
	}
	else
		ft_putchar('\n');
	return (0);
}