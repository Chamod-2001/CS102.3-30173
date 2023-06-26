#include <stdio.h>
int main()
{
    //...Declaring variable
    int mark=0, total=0, avg, counter;
    for (counter = 1; counter <= 10; counter++) //...For loop
    {
        //...User input
        printf("Enter the %d Paper Marks  :", counter);
        scanf("%d", &mark);
        total += mark; //...Total of marks
    }
    avg = total/10; //...Average of total marks
    printf("Average of Marks is %d \n", avg);
        //...If condition 
        if(avg>=50)
        {
            printf("PASS");
        }
        else
        {
            printf("FAIL");
        }

}
