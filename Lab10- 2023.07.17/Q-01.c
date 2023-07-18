#include<stdio.h>
int main()
{
    int arr1[3][3]={2,3,4,1,2,3,5,6,2}; //...Declaring the variables and arrays
    int arr2[3][3]={2,3,4,1,2,3,2,3,2};
    int result[3][3],c,r;
    for(r=0; r<3 ;r++) //... Main For loop, for count raws of 3 array
    {
        for(c=0; c<3; c++) //...Nested For loop ,for array 1 , and count of 3 columns
        {
           printf("%d ", arr1[r][c]);
        }
        printf("\t");
        
        for(c=0; c<3; c++) //...Nested For loop ,for array 2 , and count of 3 columns
        {
           printf("%d ", arr2[r][c]);
        }
        printf("\t  ");

        for(c=0; c<3; c++) //...Nested For loop ,for result array , and sum of  array 1 and array2 
        {
           result[r][c] = arr1[r][c] + arr2[r][c];
           printf("%d ", result[r][c]);
        }

        printf("\n");
    }
    

    return 0;
}