#include <stdio.h>
void sum() 
{ 
    //... No return, no parameters
    int num1, num2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum: %d\n", num1 + num2);
    
}
int main()
{
     sum();        
     sum(); 
     sum(); 
            //...Call the functions
        return 0;
}