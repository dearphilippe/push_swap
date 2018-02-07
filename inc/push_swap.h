/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 11:35:05 by passef            #+#    #+#             */
/*   Updated: 2018/02/06 16:21:31 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include "../libft/libft.h"

typedef struct		s_env
{
	char			**argv;
	int				argc;
}					t_env;

struct				s_node
{
	void			*content;
	int				num;
	struct s_node	*next;
}					t_node;

struct				s_stack
{
	struct s_node	*top;
}					t_stack;

t_env				*init_e(int argc, char **argv);
int					isEmpty(struct s_stack *stack);
void				*peek(struct s_stack *stack);
struct t_stack		*init_st(void);

#endif
