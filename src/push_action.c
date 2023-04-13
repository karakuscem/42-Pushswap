#include "push_swap.h"

static void push(t_stack **first_stack, t_stack **second_stack)
{
    t_stack *tmp;

    if (!*first_stack)
        return ;
    tmp = (*first_stack)->next;
    (*first_stack)->next = *second_stack;
    *second_stack = *first_stack;
    *first_stack = tmp;
}

void    pa(t_stack **stack_a, t_stack **stack_b)
{
    push(stack_b, stack_a);
    ft_putstr("pa\n");
}

void    pb(t_stack **stack_a, t_stack **stack_b)
{
    push(stack_a, stack_b);
    ft_putstr("pb\n");
}