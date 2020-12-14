//  C program to generate nth fibonacci term using recursion
#include <stdio.h> // header files

unsigned long long fibonacci(int number); // function declaration

int main()
{   /* declare some variables */
    int number;
    unsigned long long f;
    
    printf("Enter any number to find nth fiboacci term - \n "); // ask user input
    scanf("%d", &number); // read in user input
    
    f = fibonacci(number); 
    printf("%d fibonacci term is %llu", number, f); // display the result
    
    return 0;
}
unsigned long long fibonacci(int number) // recursive function
{
    if(number == 0) // base case    
        return 0;
    else if(number == 1) // base case
        return 1;
    else 
        return fibonacci(number-1) + fibonacci(number-2); 
}
