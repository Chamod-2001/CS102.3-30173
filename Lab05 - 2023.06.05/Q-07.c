#include <stdio.h>
int main()
{
    //declaring variable
    int salary, years;
    char city[18];
    float bonus;
    //user input
    printf("Enter Salary:");
    scanf("%d \n", &salary);
    printf("Work Years  :");
    scanf("%d \n", &years);
    printf(" Work City First Letter :");
    scanf("%s \n", &city);
    //process

    if(city == 'Colombo')
    {
        bonus = (salary * 0.1);

    }
       




    printf("salary %d", salary);
    printf("year %d", years);
}