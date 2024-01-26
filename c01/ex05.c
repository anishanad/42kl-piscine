#include <unistd.h>

void ft_putstr(char *str)
{
    // Iterate through each character in the string until '\0' (null terminator) is encountered
    while (*str != '\0') {
        // Write the current character to the standard output
        write(1, str, 1);

        // Move to the next character in the string
        str++;
    }
}

int main()
{
    char myString[] = "Hello, World!";
    
    // Call ft_putstr to display the string
    ft_putstr(myString);

    return 0;
}
