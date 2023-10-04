#include <stdio.h>

int main()
{
    // Outer loop 
    for (int i = 1; i <= 2; i++)        // Outer loop executes twice
    {
        printf("\ti,j,k\n");

        // Inner loop
        for (int j = 1; j <= 5; j++)    // Inner loop executes 5 times for each outer loop run so 10 time in total
        {
            printf("\t-----\n");  // note the use of the tab (\t) option at the start to improve the layout

            //Task - Write another level of nesting here
            for (int k = 1; k <= 3; k++)
            {
                printf("\t%d,%d,%d\n", i, j, k);
                
            }
        }
    }
}