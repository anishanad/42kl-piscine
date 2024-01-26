#include <unistd.h>
#include <stdio.h>


void    swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;

    j = 0;
    while(i < size)
    {
        i = j;
        while(j > 0 && *(tab + j - 1) > *(tab + j))
        {
            swap(tab + j, tab + j -1);
            j--;
        }
        i++;
    }
}

int  main ()
{
    int tab[] = {5, 1, 8, 4, 2};
    int size = 5;
    int i = 0;

    ft_sort_int_tab(tab, size);
    printf("Sorted array:");
    while (i++ < size)
    {
        printf("%d", tab[i]);
    }

    return 0;
}

