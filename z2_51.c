#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int Number,Even=0,Counter=0,Sum_of_Even=0;
    while(Even<10)
    {
    printf("Enter Number: ");
    scanf("%d",&Number);
    if(Number%2==0){Sum_of_Even+=Number;Even++;}
                 Counter++; 
                
    }
    printf("Amount of numbers entered is %d and arithmetic of the ten even numbers is %f\n",Counter,(double)Sum_of_Even/Even);
    system("pause");
    return 0;
}
