#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str)

{
    //Check if string is empty
    if (*str == '\0') 
    {
        return 1;
    }
    while (*str != '\0') 
    {
        // Check if the current character is not a digit
        if (!((*str >= '0' && *str <= '9')))
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
    char str1[] = "123";
    char str2[] = "Hey ho l3tsg0";
    char str3[] = " ";

    printf("%d\n", ft_str_is_numeric(str1)); // Should print 1
    printf("%d\n", ft_str_is_numeric(str2)); // Should print 0
    printf("%d\n", ft_str_is_numeric(str3)); // Should print 1

    return 0;
}