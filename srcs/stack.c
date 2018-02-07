/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 12:23:06 by passef            #+#    #+#             */
/*   Updated: 2018/02/06 15:18:10 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int				isEmpty(struct s_stack *stack)
{
	if (stack->top == NULL)
		return (1);
	return (0);
}

void			*peek(struct s_stack *stack)
{
	if (isEmpty(stack))
		return NULL;
	else
		return (stack->top->content);
}

struct t_stack	*init_st(void)
{
	struct s_stack	*st;
	st = malloc(sizeof(st));
	st->top = NULL;

	return (st);
}

void			*pop(struct s_stack *stack)
{
	if (isEmpty(stack))
		return NULL;
	
	struct s_stack *tmp;
	tmp = malloc(sizeof(tmp));

	tmp->top = stack->top;
	stack->top = stack->top->next;
	return(tmp->top->content);
}

void			push(struct s_stack *stack, void *content)
{
	struct s_node *node;
	node = malloc(sizeof(node));

	node->content = content;
	node->next = stack->top;
	stack->top = node;
}
