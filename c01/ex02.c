#include <unistd.h>
#include <stdio.h>

void swap(int *a, int *b)
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
    swap(&x, &y);

    // Convert integers to strings before writing
    char x_str[12];  // Sufficient size to hold an integer
    char y_str[12];

    // Convert integers to strings using sprintf
    int x_length = sprintf(x_str, "%d", x);
    int y_length = sprintf(y_str, "%d", y);

    // Write the strings to standard output
    write(1, x_str, x_length);
    write(1, " ", 1);  // Add space between x and y
    write(1, y_str, y_length);
    write(1, "\n", 1);  // Add a newline character

    return 0;
}

