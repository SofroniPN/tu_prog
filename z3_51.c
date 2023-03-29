#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double Money,Lih,Years=0;
    printf("Enter Money in the Bank: ");
    scanf("%lf",&Money);
    printf("Enter Lih of the Bank: ");
    scanf("%lf",&Lih);
    while(Money<1000000)
    {
    Money+=(Money*(Lih/100));
                Years++;
    }
    printf("After %f years Money will be >= 1000000!\n",Years);
    system("pause");
    return 0;
}
