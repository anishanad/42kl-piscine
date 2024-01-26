#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    if (*b != 0) {
        int temp_a = *a;  // Store the original value of a

        *a = temp_a / *b;  // Result of the division is stored in the int pointed by a
        *b = temp_a % *b;  // Remainder of the division is stored in the int pointed by b
    } else {
        // Handle division by zero, you may choose to set a and b to specific values or handle it differently
        printf("Error: Division by zero\n");
    }
}

int main()
{
    int x = 20;
    int y = 3;

    ft_ultimate_div_mod(&x, &y);

    // Print the results
    printf("Division: %d\n", x);
    printf("Modulus: %d\n", y);

    return 0;
}
