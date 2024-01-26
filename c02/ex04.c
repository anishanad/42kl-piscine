#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_lowercase(char *str)

{
    //Check if string is empty
    if (*str == '\0') 
    {
        return 1;
    }
    while (*str != '\0') 
    {
        // Check if the current character is not a lowercase alphabet
        if (!((*str >= 'a' && *str <= 'z')))
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
    char str1[] = "hellofortytwo";
    char str2[] = "Hello, 42";
    char str3[] = " ";

    printf("%d\n", ft_str_is_lowercase(str1)); // Should print 1
    printf("%d\n", ft_str_is_lowercase(str2)); // Should print 0
    printf("%d\n", ft_str_is_lowercase(str3)); // Should print 1

    return 0;
}