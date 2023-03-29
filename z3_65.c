#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int A[15];
    int i=0,num,count=0,j;
    for(;i<15;i++){
    printf("Enter number(%d): ",i);
    scanf("%d", &A[i]);
    } 
    i=14 ;j=0;
    for(;i>=0;i--){
                   
    printf("Enter number(%d): %d \n",j,A[i]);
    
    j++;
    }  
    
    system("pause");
    return 0;
}
