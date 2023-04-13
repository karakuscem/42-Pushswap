#include "push_swap.h"

static void rotate(t_stack **stack)
{
    t_stack *tmp;
    t_stack *last;

    last = last_node(*stack);
    tmp = *stack;
    *stack = (*stack)->next;
    tmp->next = NULL;
    last->next = tmp;
}

void    ra(t_stack **stack_a)
{
    rotate(stack_a);
    ft_putstr("ra\n");
}

void    rb(t_stack **stack_b)
{
    rotate(stack_b);
    ft_putstr("rb\n");
}

void    rr(t_stack **stack_a, t_stack **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    ft_putstr("rr\n");
}
