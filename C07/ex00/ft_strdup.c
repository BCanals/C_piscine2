#include <stdlib.h>

int ft_strlen(char *s)
{
    int i;

    i = -1;
    while (s[++i])
        ;
    return (i);
}

void ft_my_strcpy(char *dest, char *src)
{
    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    dest = 0;
}

char *ft_strdup(char *src)
{
    char    *rtrn;

    if (!src)
        return (0);
    rtrn = malloc(ft_strlen(src) + 1);
    if (!rtrn)
        return (0);
    ft_my_strcpy(rtrn, src);
    return (rtrn);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    char    *src = NULL;

    src = ft_strdup(src);
    printf("%p - %s\n", src, src);
}