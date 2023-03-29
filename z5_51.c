#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int Number_2,Number_1=1,Number_0=0,Amount=0,i=0;
    printf("Enter Amount: ");
    scanf("%d",&Amount);
    printf("The first %d numbers of fibonaci sequence is : ",Amount);
    while(i<Amount)
    {
    Number_2=Number_1+Number_0;
    printf("%d ",Number_0);
    Number_0=Number_1;
    Number_1=Number_2;
    i++;
    }
    
    system("pause");
    return 0;
}
