#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double Value, AmOt, Years=0;
    printf("Enter value of the machine: ");
    scanf("%If", &Value);
    printf("Enter AmOt: ");
    scanf("%If", &AmOt);
    AmOt = AmOt/100;
    while(Value>0)
    {
                  Value = Value-(Value*AmOt);
                  Years++;
    }
    printf("After %f years the value of the machine will be null!\n", Years);
    
    system("pause");
    return 0;
}
