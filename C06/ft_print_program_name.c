#include <unistd.h>

int main(int argc, char **argv)
{
    argc++;
    while (*argv[0])
    {
        write(1, argv[0], 1);
        argv[0]++;
    }
    write(1, "\n", 1);
}