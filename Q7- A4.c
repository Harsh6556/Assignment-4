// C program to find sum of digits of a number using recursion 
#include <stdio.h> // header files

int sumdig(int number); // function declaration
int main()
{
    int number, sum; // declare some variables
    
    printf("Enter any number to find sum of digits - \n "); // ask user input
    scanf("%d", &number); // read in user input
    
    sum = sumdig(number); // store the sum
    printf("Sum of digits of %d is %d", number, sum); // display the result
  
    return 0;
}
int sumdig(int number) // recursive function
{   /* base case */
    if(number == 0)
        return 0;
    return ((number % 10) + sumdig(number / 10));
}
