#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int A[6],num;
    int i=0;
    for(;i<6;i++){
    printf("Enter number(%d): ",i);
    scanf("%d", &A[i]);
    }
    int min=A[0];
    int imin=0;
    
     for(;i<5;i++){
    if(min>A[i]){min=A[i];imin=i;}
    }
    printf("min number %d and its integer %d \n",min,imin);
    
    system("pause");
    return 0;
}
