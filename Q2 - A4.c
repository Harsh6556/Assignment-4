// C program to print even or odd numbers in a given range using recursion
#include <stdio.h> // header files

void evenodd(int current, int limit); // function declaration

int main()
{
    int lower, upper; // declare some variables
    
    printf("Enter lower limit - \n "); // ask user input
    scanf("%d", &lower); // read in user input
    printf("Enter upper limit - \n "); // ask user input
    scanf("%d", &upper); // read in user input
    
    printf("Even/odd Numbers from %d to %d are -  ", lower, upper); // display the result
    
   evenodd(lower, upper); 
    return 0;
}
void evenodd(int current, int limit) // recursive function
{
    if(current > limit)
        return;
    printf("%d, ", current);

   evenodd(current + 2, limit); // calling using recursion 
}