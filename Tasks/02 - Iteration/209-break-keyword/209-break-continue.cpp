#include <stdio.h>

int main()
{
    int earlyExit = 0;

    for (int i = 0; i <= 10; i++)   // potentially loop from 1 to 10  
    {
        
        char c = getchar(); //Read character
        char _ = getchar(); //Read and discard newline (nice little hack :)
        if (c == 'q' || c == 'Q')
        {
            printf("\tUser stopped the loop early at %d\n", i);
            earlyExit = 1;
            break;                  // break out of the for loop
        }
        printf("Loop counter = %d\n", i);
    }

    if (earlyExit == 1)
    {
        printf("loop stopped early\n");
    }
    else
    {
        printf("loop continued normally\n");
    }
    // challenge done
    puts("Done");
}
