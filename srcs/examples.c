/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   examples.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 14:51:21 by passef            #+#    #+#             */
/*   Updated: 2018/02/06 14:55:01 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_stack			*get_numbers(int argc, char **argv)
{
	t_stack		*nums;
	intmax_t	num;
	int			i;
	nums = NULL;
	i = -1;
	while (++i < argc)
		while ((argv[i]) && *(argv[i]))
		{
			while (SED(*(argv[i])))
				(argv[i])++;
			if (*(argv[i]) && !ft_isdigit(*(argv[i])))
				return (print_err_numbers(nums));
			if (*(argv[i]) && (ft_isdigit(*(argv[i])) || ((*(argv[i]) == '-' ||
								*(argv[i]) == '+') && *((argv[i]) + 1) &&
							ft_isdigit(*((argv[i]) + 1)))))
			{
				num = ft_atoi_intmax_t((argv[i]));
				if (num < INT_MIN || num > INT_MAX)
					return (print_err_numbers(nums));
				argv[i] = argv[i] + get_numbers_jump(argv[i]);
			}
			nums = stack_push(nums, stack_new((int)num));
		}
	return (validate_numbers(nums));
}

t_stack			*validate_numbers(t_stack *head)
{
	t_stack *nums;
	t_stack *cur;
	nums = head;
	cur = head;
	if (!head)
		return (head);
	while (head->next != cur)
	{
		if (stack_find(nums, head->data) != 1)
		{
			stack_free(cur);
			print(ERR);
			return (NULL);
		}
		head = head->next;
	}
	if (stack_find(nums, head->data) != 1)
	{
		stack_free(cur);
		print(ERR);
		return (NULL);
	}
	return (stack_reverse(nums));
}

t_stack			*stack_reverse(t_stack *head)
{
	t_stack *cur;
	t_stack *next;
	t_stack *prev;
	if (!head || head == head->next)
		return (head);
	cur = head;
	next = head;
	while (head->next != cur)
	{
		next = head->next;
		prev = head->previous;
		head->next = prev;
		head->previous = next;
		head = next;
	}
	next = head->next;
	prev = head->previous;
	head->next = prev;
	head->previous = next;
	return (head);
}