#include<stdio.h>
int main()
{
    //...Declaring 4*4 array and variabals 
    int arr[4][4]={8,17,9,6,5,2,11,18,27,28,0,4,1,3,10},r,c;
    //...Display the array
    for(r=0; r<4; r++) //...Main For loop, for 4 raws 
    {
        for(c=0; c<4; c++) //... Nested For loop, for 4 columns 
        {
            printf("%d", arr[r][c]);
            printf("\t");
        }
        
        printf("\n");
    }
    //... Search  valume 5 from the array
    printf("\nArray integer of ""5"":\n");
    for(r=0; r<4; r++)//...Main For loop, for 4 raws 
    {
        for(c=0; c<4; c++)  //... Nested For loop, for 4 columns 
        {
                if(arr[r][c]== 5) //...If condition for, check the value 5 index number
                {
                    printf("Index of ""5""= [%d][%d]\n", r,c);
                }
        }
    }
    return 0;
}