#include <stdio.h>

int main()
{
    // Outer loop 
    for (int i = 1; i <= 12; i++)        // Outer loop executes twice
    {
        printf("(%d)\n", i );

        // Inner loop
        for (int j = 1; j <= 12; j++)    // Inner loop executes 5 times for each outer loop run so 10 time in total
        {
            int k = j * i;
            printf("\t%d X %d = %d\n", j , i , k );  // note the use of the tab (\t) option at the start to improve the layout
            
            //Task - Write another level of nesting here

        }
    }
}
