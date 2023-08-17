#include "../so_long.h"

int ft_strlen(char *str)
{
    int i;
    i = -1;
    if(!str)
        return (0);
    while (str[++i])
        ;
    return (i);
}