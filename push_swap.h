#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
    int				value;
    struct s_stack	*next;
}					t_stack;


// Swap
void    sa(t_stack **stack_a);
void    sb(t_stack **stack_b);
void    ss(t_stack **stack_a, t_stack **stack_b);

// Utils
void    ft_putstr(char *str);

#endif