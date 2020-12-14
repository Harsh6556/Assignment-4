// C program to find reverse of a number using recursion 
#include <stdio.h> // header file
#include <math.h> // header file
 
int reverse(int, int); // function delcaration
 
int main()
{   /* declare some variables */
    int num, answer;
    int length = 0, copy;
 
    printf("Enter an integer number to reverse - \n "); // ask user input
    scanf("%d", &num); // read in user input
    copy = num;
    while (copy != 0)
    {
        length++;
        copy = copy / 10;
    }
    answer = reverse(num, length);
    printf("The reverse of %d is %d.\n", num, answer); // display the result
    return 0;
}
 
int reverse(int number, int length) // recursive function 
{   /* base case */
    if (length == 1)
    {
        return number;
    }
    else
    {
        return (((number % 10) * pow(10, length - 1)) + reverse(number / 10, --length));
    }
}