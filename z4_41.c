#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int day,month,year;     
    printf("Vavedete day :");
    scanf("%d",&day);
    printf("Vavedete month :");
    scanf("%d",&month);
    if(month>12){printf("Greshno!\n");goto end;}
    printf("Vavedete year :");
    scanf("%d",&year);
    if((year%4==0)&&((year%100!=0)||(year%400==0)))
    {
       switch(month)
       {
                    case 1:case 3:case 5:case 7:case 8:case 10:case 12:if(day>0 && day<32){printf("Verno!\n");}else{printf("Greshno!\n");}break;
                    case 4:case 6:case 9:case 11:if(day>0 && day<31){printf("Verno!\n");}else{printf("Greshno!\n");}break;
                    case 2: if(day>0 && day<30){printf("Verno!\n");}break;
                    }                                            
}else{ switch(month)
       {
                    case 1:case 3:case 5:case 7:case 8:case 10:case 12:if(day>0 && day<32){printf("Verno!\n");}else{printf("Greshno!\n");}break;
                    case 4:case 6:case 9:case 11:if(day>0 && day<31){printf("Verno!\n");}else{printf("Greshno!\n");}break;
                    case 2: if(day>0 && day<29){printf("Verno!\n");}else{printf("Greshno!\n");}break;
                    } }
                    end:
    system("pause");
    return 0;
}
