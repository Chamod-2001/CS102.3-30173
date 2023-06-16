#include <stdio.h>
int main()
{
    //...Declaring Variable
    float deg_fah, deg_cel; 
    //...UI
    printf("Enter the Degrees Fahrenheit = \n");
    scanf("%f", &deg_fah);
    //...Process
    deg_cel = ((deg_fah - 32) * 5) / 9;
    //...Display Output
    printf("Degrees Celsius is %.2f \n", deg_cel);

    return 0;
}