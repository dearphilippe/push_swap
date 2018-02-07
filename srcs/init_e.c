/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_e.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 12:01:57 by passef            #+#    #+#             */
/*   Updated: 2018/02/06 14:50:13 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_env	*init_e(int argc, char **argv)
{
	t_env	*e;

	if (!(e = malloc(sizeof(e))))
		return (0);
	e->argc = argc;
	e->argv = argv;
	return (e);
}
