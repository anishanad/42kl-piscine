#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str) 
{
    int i = 0;

    // Check if string is empty
    if (str[i] == '\0') 
    {
        return "";
    }

    while (str[i] != '\0') {
        // Check if the current character is a lowercase alphabet
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] -= 32; // Convert to uppercase
        }
        // Move to the next character
        i++;
    }

    return str;
}

int main()
{
    char s[1000];  

    printf("Enter the string in lower case: ");
    gets(s);
    
    printf("String in lowercase: '%s'\n", s);
 
    ft_strupcase(s);
     
    printf("String in uppercase: '%s'\n", s);

    return 0;
}
