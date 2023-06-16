#include <stdio.h>
int main()
{
    float d_trav, time, avg_speed; //...Decalring Variable
    //...UI
    printf("Enter Distance in meter = \n");
    scanf("%f", &d_trav);
    printf("Time Taken in second =\n");
    scanf("%f", &time);
    //...Process
    avg_speed = (d_trav / time);
    //...Display output
    printf("Avg speed is %.2f 1/ms \n", avg_speed);
    
    return 0;
}