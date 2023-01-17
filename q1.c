#include <stdio.h>
int main()
{
    // question 1
    /*
    write a c program to calculate sum of digit of a number
    */

    // using while loop
    int num, num2, num3 = 0, result;
    printf("Please enter you number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        num2 = num % 10;                     // this part of the code is for to get last number
        printf("the number is %d \n", num2); // this part of the code is for print the number
        num = num / 10;                      // this part of the code is for remove last number
        result = num3 + num2;
        num3 += num2;
        printf("\n the result is: %d", num3);
    }

    // using for loop
    int num, num2, num3 = 0, result;
    printf("Please enter you number: ");
    scanf("%d", &num);
    for (int i = 1; num > 0; i++)
    {
        num2 = num % 10;                     // this part of the code is for to get last number
        printf("the number is %d \n", num2); // this part of the code is for print the number
        num = num / 10;                      // this part of the code is for remove last number
        result = num3 + num2;
        num3 += num2;
        printf("\n the result is: %d", num3);
    }
}
