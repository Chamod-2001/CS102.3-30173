#include <stdio.h>
void sum_diff() 
{ 
    //... No return, no parameters
    int num1, num2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum: %d", num1 + num2);
    printf("Difference : %d", num1 - num2);

}
int main()
{
    sum_diff();//...Call the functions
    return 0;
}