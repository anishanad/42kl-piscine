#include <unistd.h>
#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    while(*src != '\0' && n > 0)
    {
        // Iterates through each character of the src string and copies to dest
        *dest = *src;
        // Increments both dest and src to move up a character
        dest++;
        src++;
        // Decrements n to keep track of the number of characters left to be copied
        n--;
    }

    while (n > 0);
    {
        // Filles the remainder of characters in dest with null term when src is < that dest
        *dest = '\0';
        dest++;
        n--;
    }

    return dest;

}

int main()
{
    char str1[20] = "Fortytwo KL";
    char str2[20];

    ft_strncpy(str2 , str1, 5);

    printf("Copied string: %s\n", str2);

    return 0;
}
