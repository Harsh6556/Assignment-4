// C program to sum of all even or odd numbers in a given range using recursion 
#include <stdio.h> // header files

int sumevenodd(int lower, int upper); // function delcaration
int main()
{
    int lower,upper, sum; // declare some variables

    printf("Enter lower limit - \n "); // ask user input
    scanf("%d", &lower); // read in user input
    printf("Enter upper limit - \n "); // ask user input
    scanf("%d", &upper); // read in user input
    printf("Sum of even/odd numbers between %d to %d is %d\n", lower, upper, sumevenodd(lower, upper)); // display the result
    
    return 0;
}
int sumevenodd(int lower, int upper) // recursive function
{   /* base case */
    if(lower > upper)
        return 0;
    else
        return (lower + sumevenodd(lower + 2, upper));
}
