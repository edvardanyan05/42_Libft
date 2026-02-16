
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *it;

    if(!lst || !new)
        return;
    if (!*lst)
    {
        *lst = new;
        return;
    }
    it = *lst;
    while(it->next)
        it = it->next;
    it->next = new;
}