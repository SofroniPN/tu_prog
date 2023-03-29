#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int A[5][7];
    int i=0,j=0,sum=0;
    printf("Enter numbers: ");
    for(;i<5;i++){
                  for(;j<7;j++)
    {
    scanf("%d", &A[i][j]);
    }
    j=0;
    } 
    i=0;j=0;
    for(;i<5;i++){
                  for(;j<7;j++){
    printf("%d ", &A[i][j]);
    }
    printf("\n");
    j=0;
    } 
    i=0;j=0;
    for(;j<7;j++){
                  for(;i<5;i++)
    {
    sum=sum+A[i][j];
    }
    printf("Sum of col(j): %d \n",sum);
    i=0,sum=0;
    } 
    system("pause");
    return 0;
}
