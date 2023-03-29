#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double x0,y0,x1,y1,r_o,r_t,diff;     
    printf("Vavedete x0 i y0 (center):");
    scanf("%lf",&x0);
    scanf("%lf",&y0);
    printf("Vavedete x1 i y1(tochka):");
    scanf("%lf",&x1);
    scanf("%lf",&y1);
    printf("Vavedete radius:");
    scanf("%lf",&r_o);
    r_t=sqrt(pow((x0-x1),2)+ pow((y0-y1),2));
    if(r_t>abs(r_o)){printf("tochkata e vunka!");}
    else{printf("tochkata e vutre!");}
    
    system("pause");
    return 0;
}
