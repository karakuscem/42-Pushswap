#include "push_swap.h"

static void reverse_rotate(t_stack **stack)
{
    t_stack *tmp;
    t_stack *last;
    t_stack *before_last;

    last = last_node(*stack);
    before_last = before_last_node(*stack);
    tmp = *stack;
    *stack = last;
    (*stack)->next = tmp;
    before_last->next = NULL;
}

void    rra(t_stack **stack_a)
{
    reverse_rotate(stack_a);
    ft_putstr("rra\n");
}

void    rrb(t_stack **stack_b)
{
    reverse_rotate(stack_b);
    ft_putstr("rrb\n");
}

void    rrr(t_stack **stack_a, t_stack **stack_b)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    ft_putstr("rrr\n");
}