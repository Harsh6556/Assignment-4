//  C program to find gcd of two numbers using recursion
#include <stdio.h> // header files

int gcd(int a, int b); // function declaration
int main()
{
    int a, b; // declare some variables
    printf("Enter two positive integers - \n "); // ask user input
    scanf("%d %d", &a, &b); // read in user input
    printf("G.C.D of %d and %d is %d.", a, b, gcd(a, b)); // display the result
    return 0;
}
int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}
