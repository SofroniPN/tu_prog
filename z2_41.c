#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int chislo,i=0,ostatuk;     
    printf("vuvejdane na chislo: ");
    scanf("%d",&chislo);
    do{
    ostatuk=(chislo%5);                   
   if(ostatuk!=0){printf(" %d ne se deli na 5 => povishavane!\n",chislo);
    chislo++;i++;}
    else{printf(" %d se deli na 5 =>bravo!\n",chislo);break;}
    }while(i<5);
    system("pause");
    return 0;
}
