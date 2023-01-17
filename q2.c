#include <stdio.h>
int main()
{
    // question 2

    /*
    suppose you have 2 array x,y. combine 2 array and reverse the array
    */

    int x[3] = {1, 2, 3};
    int y[3] = {4, 5, 6};
    int index = 0;
    int combined[5];
    int array_length = sizeof(x) / sizeof(x[0]);
    int combined_array_length = sizeof(combined) / sizeof(combined[0]);

    // for array x
    for (int i = 0; i < array_length; i++)
    {
        combined[index] = x[i];
        index++;
    }

    // for array y
    for (int i = 0; i < array_length; i++)
    {
        combined[index] = y[i];
        index++;
    }

    // for combined array
    for (int i = combined_array_length; i >= 0; i--)
    {
        printf("%d \n", combined[i]);
    }
}