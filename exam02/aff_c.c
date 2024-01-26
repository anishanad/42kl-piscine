#include <unistd.h>

void aff_c(char *str)
{
    // Iterate through each character in the string until '\0' (null terminator) is encountered
    while (*str != '\0')
    {
        
        if (*str == 'q')
        {
            // Write the first q character followed by a newline
            write(1, "q\n", 2);
        }

        else
        {
            write(1, "q\n", 2);
        }
        // Move to the next character in the string
        str++;
    }
}

int main()
{
    char str1[] = "qwerty";
    char str2[] = "abc";
    
    // Call aff_c to display the q character
    aff_c(str1);

    return 0;
}
