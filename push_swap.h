#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
    int				value;
    struct s_stack	*next;
}					t_stack;


// Reverse Rotate
void    rra(t_stack **stack_a);
void    rrb(t_stack **stack_b);
void    rrr(t_stack **stack_a, t_stack **stack_b);

// Rotate
void    ra(t_stack **stack_a);
void    rb(t_stack **stack_b);
void    rr(t_stack **stack_a, t_stack **stack_b);

// Push
void    pa(t_stack **stack_a, t_stack **stack_b);
void    pb(t_stack **stack_a, t_stack **stack_b);

// Swap
void    sa(t_stack **stack_a);
void    sb(t_stack **stack_b);
void    ss(t_stack **stack_a, t_stack **stack_b);

// Utils
void    ft_putstr(char *str);
t_stack *last_node(t_stack *stack);
t_stack *before_last_node(t_stack *stack);

#endif