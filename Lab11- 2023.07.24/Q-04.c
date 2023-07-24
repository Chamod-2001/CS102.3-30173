#include<stdio.h>
float pro(int a, int b)
{
    if(a>=0 && b>0 )
    {
        return a/b;
    }
    else
        return -1;
}
int main()
{
    int num1, num2;
    printf("Enter the two number:");
    scanf("%d %d", &num1,&num2);
    float result = pro(num1, num2);
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