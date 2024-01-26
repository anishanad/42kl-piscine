#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int count = 0;

    // Iterate through the string until the null terminator is encountered
    while (*str != '\0') {
        // Check if the current character is not a space
        if (*str != ' ') {
            count++;
        }
        str++;  // Move to the next character in the string
    }

    return count;
}

int main()
{
    char myString[] = "Hello, World!";
    
    // Call ft_strlen to get the length of the string without counting spaces
    int lengthWithoutSpaces = ft_strlen(myString);

    // Print the result
    write(1, "Length without spaces: ", 24);  // 24 is the length of the string "Length without spaces: "
    
    // Convert the length integer to a string and print it
    char length_str[20];  // Assuming a maximum length of 11 digits (plus the null terminator)
    sprintf(length_str, "%d", lengthWithoutSpaces);
    write(1, length_str, lengthWithoutSpaces);

    write(1, "\n", 1);  // Add a newline character

    return 0;
}
