#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *rtrn;
    int i;

    if (min >= max)
        return (0);
    rtrn = malloc(sizeof(int) * (max - min));
    if (!rtrn)
        return (0);
    i = 0;
    while (min < max)
    {
        rtrn[i] = min;
        min++;
        i++;
    }
    return (rtrn);
}

#include <stdio.h>

int main(int argc, char **argv)
{
    int *array;
    int min;
    int max;

    argc++;
    min = atoi(argv[1]);
    max = atoi(argv[2]);
    array = ft_range(min, max);
    while (min < max)
    {
        printf("%i\n", *array);
        array++;
        min++;
    }
}