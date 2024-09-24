#include <stdio.h> 
#include <ctype.h> 

int main(int argc, char const *argv[])
{
    for (size_t i = 1; i < argc; i++)
    {
        // int valid = 1; // Assume the argument is valid
        // for (size_t j = 0; argv[i][j] != '\0'; j++)
        // {
        //     if (!islower(argv[i][j]) || isdigit(argv[i][j])) // Check if the character is not a lowercase letter
        //     {
        //         valid = 0; // Mark as invalid
        //         break;
        //     }
        // }

        int x = 0;
        while (argv[i][x] != '\0' && argv[i][x]>= 'a' && argv[i][x] <= 'z')
        {
            x++;
        }
        
        if (argv[i][x] != '\0')
        {
            printf("Error: Argument %lu '%s' needs to consist only of characters [a-z].\n", i, argv[i]);
        }
        else
        {
            printf("Valid argument: %s\n", argv[i]);
        }
    }
    
    return 0;
}
