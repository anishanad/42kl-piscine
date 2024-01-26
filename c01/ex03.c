#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0) {
        *div = a / b;
        *mod = a % b;
    } else {
        // Handle division by zero, you may choose to set div and mod to specific values or handle it differently
        printf("Error: Division by zero\n");
    }
}

int main()
{
    int a = 20;
    int b = 3;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    // Print the results
    printf("Division: %d\n", div);
    printf("Modulus: %d\n", mod);

    return 0;
}
