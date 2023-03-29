#include<stdio.h>
#include<stdlib.h>
int main()
{
    int velocity_mph,velocity_kmph;
    const double MILES_INTO_KILOMETERS = 1.60934;
    printf("Molia vavedete milite v chas: ");
    scanf("%d",&velocity_mph);
    velocity_kmph = velocity_mph*MILES_INTO_KILOMETERS;
    printf("Vashata scorost v kilometri %d\n",velocity_kmph);
   
    system("pause");
    return 0;
    }
