#include <stdio.h>
int main()
{ 
    //...Decalaring Variables
    int n1,n2;
    char op;//...Operator
    //...Input Operator
    printf("Enter the operator:");
    scanf("%c", &op);
    //...User Input 
    printf("Enter two num:");
    scanf("%d %d ", &n1, &n2 );
   
    //...Condition
    switch(op)
    {
        case '+' :printf("Addition      = %d\n", n1+n2 );break;
        case '-' :printf("Substraction  = %d\n", n1-n2 );break;
        case '/' :printf("Divition      = %f\n", (float)n1/n2 );break;
        case '*' :printf("Multification = %d\n", n1* n2 );break;
        default : printf("Invalid Operator\n");

    }
return 0;

}