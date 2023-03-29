#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float A[10];
    int i=0,num,count=0;
    for(;i<10;i++){
    printf("Enter number(%d): ",i);
    scanf("%f", &A[i]);
    }  
    printf("enter a number divider: ");
    scanf("%d",&num); 
    i=0; 
     for(;i<10;i++){
    if(A[i]>num){printf("%f \n",A[i]);count++;}
    }
    printf("\n number of integers %d \n",count);
    
    system("pause");
    return 0;
}
