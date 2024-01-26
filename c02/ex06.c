#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_printable(char *str)
{
    //Check if string is empty
    if (*str == '\0') 
    {
        return 1;
    }
    while (*str != '\0') 
    {
        // Check if the current character is not a printable character
        if (!((*str > 32 && *str < 127)))
        {
            return 0;
        } 
        // Move to the next character
        str++;
    }

    return 1; 
}

int main()
{
    char str1[] = "HELLO, FORTYTWO";
    char str2[] = "hello, 42";
    char str3[] = " ";
    char str4[] = "Doll@ $igns";

    printf("%d\n", ft_str_is_printable(str1)); // Should print 1
    printf("%d\n", ft_str_is_printable(str2)); // Should print 0
    printf("%d\n", ft_str_is_printable(str3)); // Should print 1

    return 0;
}