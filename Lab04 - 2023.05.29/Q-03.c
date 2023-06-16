#include <stdio.h>

int main()
{
    //...Declaring variable
    char emp_name[40];
    float basic_s, new_s, inc;
    //...UI
    printf("Enter Your Name        : ");
    scanf("%[^\n]", emp_name); //..."%[^\n]"- considering the spaces
    printf("Enter Your Basic Salary: ");
    scanf("%f", &basic_s);
    //...Condition
    if ( basic_s < 5000)
    {
        inc =  (basic_s * 0.05);
    }
        else if (basic_s >= 5000 && basic_s < 10000)
        {
        inc =  (basic_s * 0.1);
        }
            else if (basic_s >= 10000)
            {
                inc =  (basic_s * 0.15);
            }
        new_s = basic_s + inc; //...Calculation
    //...Display Output
    printf("\nEmployee Name:%s\nNew Salary   : %.2f", emp_name, new_s);
    
    return 0;
}
