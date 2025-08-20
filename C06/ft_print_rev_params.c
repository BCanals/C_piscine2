#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc <= 1)
        return 0;
    i = argc;
    while(--i > 0)
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