#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_uppercase(char *str)
{
    //Check if string is empty
    if (*str == '\0') 
    {
        return 1;
    }
    while (*str != '\0') 
    {
        // Check if the current character is not a uppercase alphabet
        if (!((*str >= 'A' && *str <= 'Z')))
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
    char str1[] = "HELLOFORTYTWO";
    char str2[] = "hello, 42";
    char str3[] = " ";

    printf("%d\n", ft_str_is_uppercase(str1)); // Should print 1
    printf("%d\n", ft_str_is_uppercase(str2)); // Should print 0
    printf("%d\n", ft_str_is_uppercase(str3)); // Should print 1

    return 0;
}