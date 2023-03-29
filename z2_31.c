#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double s_t,s_o,r,pi=3.14,diff;
    printf("Vavedete radiusa na okrujnost:");
    scanf("%lf",&r);
    s_o=pi*(pow(r,2));
    s_t=3*pow(r,2)*sqrt(3);
    printf("s_t= %f\n",s_t);
    printf("s_o= %f\n",s_o);
    diff=s_t-s_o;
    printf("diff= %f\n",diff);
    system("pause");
    return 0;
}
