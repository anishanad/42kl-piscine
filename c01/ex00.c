#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int n;
    ft_ft(n);

    char newline = '\n';
    int length = sizeof(n);

    write(1, &n, length);  // Write the integer directly
    write(1, &newline, 1);  // Write a newline character

    return 0;
}