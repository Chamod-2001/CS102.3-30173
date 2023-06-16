#include <stdio.h>
int main()
{
    //...Declaring variable
    float redius,diameter,circumference,area;
    //...UI
    printf("Enter the Redius:");
    scanf("%f", &redius);
    //...Process
    diameter      = (redius * 2);
    circumference = (2 * 3.14159 * redius);
    area          = (3.14159 * redius * redius);
    //...Display Output
    printf("Diameter of a Circle(m)      :%.2f\nCircumference of a Circle(m) :%.2f\nArea of a Circle(Squre m)    :%.2f", diameter, circumference, area);

    return 0;
}