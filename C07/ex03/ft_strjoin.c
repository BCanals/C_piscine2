#include <stdlib.h>
#include <stdio.h>

int ft_get_size(int size, char **strs, char *sep)
{
    int i;
    int j;
    int sl;
    int rtrn;

    i = -1;
    rtrn = 0;
    while (++i < size)
    {
        j = -1;
        while (strs[i][++j])
            rtrn++;
    }
    rtrn++;
    sl = -1;
    while (sep[++sl])
        ;
    rtrn += (size - 1) * sl;
    return (rtrn);
}

void    ft_my_strcpy(char *dest, char *src, int *j)
{
    int i;

    i = -1;
    while (src[++i])
    {
        dest[*j] = src[i];
        (*j)++;
    }
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char    *rtrn;
    int     i;
    int     j;

    if (size == 0)
    {
        rtrn = malloc(1);
        *rtrn = 0;
        return (rtrn);
    }
    rtrn = malloc(ft_get_size(size, strs, sep));
    i = -1;
    j = 0;
    while (++i < size)
    {
        if (i)
            ft_my_strcpy(rtrn, sep, &j);
        ft_my_strcpy(rtrn, strs[i], &j);
    }
    rtrn[j] = 0;
    return (rtrn);
}

int main(int argc, char **argv)
{
    printf("%i\n", ft_get_size(argc, argv, " "));
    printf("%s\n", ft_strjoin(argc, argv, " "));
}