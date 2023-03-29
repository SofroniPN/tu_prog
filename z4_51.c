#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int Amount,Number,Br_p=0,Br_n=0,i=0;
    printf("Enter Amount: ");
    scanf("%d",&Amount);
    while(i<Amount)
    {
                       printf("Enter number: ");
    scanf("%d",&Number);
    if(Number>0){Br_p++;}
    if(Number<0){Br_n++;}
    i++;
    }
    printf("positive amount is %d !\n negative amount is %d !\n",Br_p,Br_n);
    system("pause");
    return 0;
}
