// C program to print all natural numbers from 1 to n using function
#include <stdio.h> // header files

void numbers(int lower, int upper); // function delcaration
int main()
{
    int lower, upper; // declare some variables

    printf("Enter lower limit - \n "); // ask user input
    scanf("%d", &lower); // read in user input
    printf("Enter upper limit - \n "); // ask user input
    scanf("%d", &upper); // read in user input

    printf("All natural numbers from %d to %d are: ", lower, upper); // display the result
    numbers(lower, upper);
    
    return 0;
}
void numbers(int lower, int upper) // recursive function
{
    if(lower > upper)
        return;
    
    printf("%d, ", lower);
    numbers(lower + 1, upper); // calling using recursion
}