#include <unistd.h>
#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        int temp = tab[i];
        tab[i] = tab [j];
        tab [j] = temp;

        i++;
        j--;
    }
}

int  main ()
{
    int tab[] = {1, 2, 3, 4};
    int size = 4;
    int i = 0;

    ft_rev_int_tab(tab, size);
    while (i++ < size)
    {
        printf("%d", tab[i]);
    }

    return 0;

}
