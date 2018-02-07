/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 11:35:40 by passef            #+#    #+#             */
/*   Updated: 2018/02/06 16:24:32 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	t_env			*e;
	struct t_stack	*n;
	char			tmp[50];

	n = init_st();
	if (!(e = init_e(argc, argv)))
		return (0);
	if (argc > 1)
	{
		argc--;
		while ((9 <= e->argv[e->argc] && e->argv[e->argc] <= 13)
		|| e->argv[e->argc] == 32)
			argc--;
		if (ft_isdigit(e->argv[e->argc]))
			return;
		else
			ft_puterror("KO");
		return (0);
	}
	else
		ft_putstr("\n");
	return (EXIT_SUCCESS);
}
