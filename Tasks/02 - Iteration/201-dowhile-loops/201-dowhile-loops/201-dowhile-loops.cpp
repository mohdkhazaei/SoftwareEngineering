#include <stdio.h>

int main()
{
    int i = 5; //when i starts at 6 it ends at 7 because even if the condition rejects it, the proccess happens at least once

    printf("Start while loop\n");

    do
    {
        printf("i = %d\n", i);
        i--;              // Alternatively, write i++;
    } while (i >= 0);            //Repeat if condition is met

    printf("Finished: i = %d\n", i);
}


