#include <unistd.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
    int nbr;
    int *nbr1 = &nbr;
    int **nbr2 = &nbr;
    int ***nbr3 = &nbr2;
    int ****nbr4 = &nbr3;
    int *****nbr5 = &nbr4;
    int ******nbr6 = &nbr5;
    int *******nbr7 = &nbr6;
    int ********nbr8 = &nbr7;
    int *********nbr9 = &nbr8;
    ft_ultimate_ft(nbr9);

    char newline = '\n';
    int length = sizeof(nbr);

    write(1, &nbr, length);  // Write the integer directly
    write(1, &newline, 1);  // Write a newline character

    return 0;
}

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}
