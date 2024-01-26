#include <unistd.h>
#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
    while(*src != '\0')
    {
        // Iterates through each character of the src string and copies to dest
        *dest = *src;
        // Increments both dest and src to move up a character
        dest++;
        src++;
    }

    // Adds a null terminator to the end of dest
    *dest = '\0';

    // Returns the destination string
    return dest;

}

int main()
{
    char str1[20] = "Fortytwo KL";
    char str2[20];

    ft_strcpy(str2 , str1);

    printf("Copied string: %s\n", str2);

    return 0;
}