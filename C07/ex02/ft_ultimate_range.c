#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;

    if (min >= max)
    {
        *range = 0;
        return (0);
    }
    *range = malloc(sizeof(int) * (max - min));
    if (!*range)
        return (-1);
    i = 0;
    while (min < max)
    {
        (*range)[i] = min;
        min++;
        i++;
    }
    return (i);
}

int main(int argc, char **argv)
{
    int *array;
    int i;
    int ret;
    int min;
    int max;

    argc++;
    min = atoi(argv[1]);
    max = atoi(argv[2]);
    ret = ft_ultimate_range(&array, min, max);
    printf("return: %i\n", ret);
    i = 0;
    while (min < max && ret > 0)
    {
        printf("%i\n", *array);
        array++;
        min++;
    }
}