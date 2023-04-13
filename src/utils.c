#include "push_swap.h"

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

t_stack *last_node(t_stack *stack)
{
    t_stack *tmp;

    if (!stack)
        return (stack);
    tmp = stack;
    while (tmp->next != NULL)
        tmp = tmp->next;
    return (tmp);
}

t_stack *before_last_node(t_stack *stack)
{
    t_stack *tmp;

    if (!stack || !stack->next)
        return (stack);
    tmp = stack;
    while (tmp->next->next != NULL)
        tmp = tmp->next;
    return (tmp);
}