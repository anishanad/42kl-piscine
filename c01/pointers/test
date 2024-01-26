#include <unistd.h>

void    swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
    
}

int main()
{
    int x = 5;
    int y = 10;
    swap(&x ,&y);
    write(1, x, sizeof(int));
    write(1, y, sizeof(int));
   
    return 0;
}
