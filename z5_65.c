#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int A[15];
    int i=0;
    for(;i<15;i++){
    printf("Enter number(%d): ",i);
    scanf("%d", &A[i]);
    } 
    i=0;
    for(;i<15;i++){            
   if((i+1)%3==0){printf("Enter number(%d): %d",i,A[i]);}
    }  
    system("pause");
    return 0;
}
