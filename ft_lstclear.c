
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *it;

    if (!lst || !del)
        return;
    while(*lst)
    {
        it = *lst;
        *lst = (*lst)->next;
        del(it->content);
        free(it);
    }
}