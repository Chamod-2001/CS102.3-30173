#include <stdio.h>
int main()
{
    //...Declaring variable
    int month_no;
    //...User Input
    printf("Enter the Month Number :");
    scanf("%d", &month_no);
    //...Switch condition
    switch(month_no)
    {
        case 1 :printf("January has 31 Days " );break;
        case 2 :printf("February has 28 Days" );break;
        case 3 :printf("March has 31 Days "   );break;
        case 4 :printf("April has 30 Days"    );break;
        case 5 :printf("May has 31 Days "     );break;
        case 6 :printf("June has 30 Days"     );break;
        case 7 :printf("July has 31 Days"     );break;
        case 8 :printf("August has 31 Days"   );break;
        case 9 :printf("September has 30 Days");break;
        case 10:printf("October has 31 Days"  );break;
        case 11:printf("November has 30 Days" );break;
        case 12:printf("December has 31 Days" );break;
        
        default :printf("%d Error Input", month_no);
    }
}