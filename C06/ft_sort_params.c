#include <unistd.h>

void    ft_swap(char **a, char **b)
{
    char *temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

void    ft_sort_params(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    while (++i < argc - 1)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strcmp(argv[i], argv[j]) > 0)
                ft_swap(&argv[i], &argv[j]);
            j++;
        }
    }
}


int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    if (argc <= 1)
        return 0;
    ft_sort_params(argc, argv);
    while(++i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
    }
    return 0;
}