// C program to check for a palindrome number using recursion 
#include <stdio.h> // header file
#include <math.h> // header file

int rev(int num); // function declaration
int palindrome(int num); // function declaration

int main()
{
    int number; // declare some variable
    
    printf("Enter any number - \n "); // ask user input
    scanf("%d", &number); // read in user input
    /* display the result */
    if(palindrome(number) == 1)
    {
        printf("%d is a palindrome number.\n", number);
    }
    else
    {
        printf("%d is NOT a palindrome number.\n", number);
    }
    return 0;
}

int palindrome(int number) 
{ 
    if(number == rev(number))
    {
        return 1;
    }
    
    return 0;
}

int rev(int number) // recursive function
{
   
    int digits = (int)log10(number); // store the number of digits
    /* base case */
    if(number == 0)
        return 0;
        else
    return ((number%10 * pow(10, digits)) + rev(number/10));
}