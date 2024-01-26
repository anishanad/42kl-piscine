#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_alpha(char *str)

{
    //Check if string is empty
    if (*str == '\0') 
    {
        return 1;
    }
    while (*str != '\0') 
    {
        // Check if the current character is not an alphabet character
        if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
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
    char str1[] = "Hellofortytwo";
    char str2[] = "Hello, 42";
    char str3[] = " ";

    printf("%d\n", ft_str_is_alpha(str1)); // Should print 1
    printf("%d\n", ft_str_is_alpha(str2)); // Should print 0
    printf("%d\n", ft_str_is_alpha(str3)); // Should print 1

    return 0;
}