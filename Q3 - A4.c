// C program to print sum of all natural numbers from 1 to n using recursion 
#include <stdio.h> // header files

int add(int n); // function delcaration
int main()
{
    int number; // declare some varaibles
    printf("Enter a positive integer - \n "); // ask user input
    scanf("%d", &number); // read in user input
    printf("Sum of all natural numbers from 1 to %d is %d", number,add(number)); // display the result
    return 0;
}
int add(int num)
{
    if (num != 0)
        return num + add(num - 1);
    else
        return num;
}