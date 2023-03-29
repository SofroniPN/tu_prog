#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int A[20];
    int i=0,count=0,sum=0;
    for(;i<20;i++){
    printf("Enter number(%d): ",i);
    scanf("%d", &A[i]);
    } 
    i=0;
    for(;i<20;i++){            
   if(A[i]>0){sum=sum+A[i]; count++;}
    }  
    printf("%d    %d",sum,count);
    system("pause");
    return 0;
}
