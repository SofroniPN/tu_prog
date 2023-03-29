#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double x,y;     
    printf("Vavedete x :");
    scanf("%lf",&x);
    printf("Vavedete y :");
    scanf("%lf",&y);
    if(x==0)
    {
            if(y==0){
                     printf("center of system\n");
                     }
                     else{printf("it is on the ordinate\n");}
    }else{
          if(y==0){
                     printf("it is on the abscisse\n");
                     }
                     else{
                          if(x>0){
                                  if(y>0){printf("it is in first plane\n");}
                                  else{
                                       printf("it is in forth plane\n");
                                       }
                                       }
                                       else{
                                            if(y>0){printf("it is in second plane\n");}
                                  else{
                                       printf("it is in third plane\n");
                                       }
                                       }
                                       }
}
    system("pause");
    return 0;
}
