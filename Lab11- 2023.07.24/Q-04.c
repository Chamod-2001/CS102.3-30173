#include<stdio.h>
//...Repeating with parameters
float pro(int a, int b)
{
    //...If loop, check the user input values are whole numbers
    if(a>=0 && b>0 )
    {
        return a/b;//...Return the quation
    }
    else
        return -1;
}
int main()
{
    int num1, num2;
    printf("Enter the two number:");
    scanf("%d %d", &num1,&num2);
    float result = pro(num1, num2);//...Call the function and assign to the result veriable
    if(result == -1)
    {
        printf("\nERROR: ENTER THE POSITIVE NUMBER.\nERROR: CAN'T DEVIDE BY 0. ");
    }
    else
    {
      printf("QUOTIENT: %.2f", pro(num1, num2));  
    }
    return 0;
}