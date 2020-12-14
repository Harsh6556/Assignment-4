 //  C program to find LCM of two numbers using recursion
#include <stdio.h> // header files

int LCM(int n1, int n2); // function declaration
int main()
{
    int num1, num2, leastcm; // declare some variables

    printf("Enter any two numbers - \n "); // ask user input
    scanf("%d%d", &num1, &num2); // read in user input
    
    if(num1 > num2)
        leastcm = LCM(num2, num1);
    else
        leastcm = LCM(num1, num2);
    printf("LCM of %d and %d is %d", num1, num2, leastcm); // display the result
    
    return 0;
}
int LCM(int n1, int n2) // recursive function
{
    static int mult = 0;
    mult += n2;
    /* base case */
    if((mult % n1 == 0) && (mult % n2 == 0))
    {
        return mult;
    }
    else 
    {
        return LCM(n1, n2);
    }
}
