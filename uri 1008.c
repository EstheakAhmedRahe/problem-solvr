#include <stdio.h>
int main()
{
    double a,b,c,NUMBER,SALARY;
    scanf("%d",&a);
    NUMBER = a;
    printf("NUMBER = %d\n",NUMBER);
    scanf("%lf",&b);
    scanf("%lf",&c);
    SALARY = b*c;
    printf("SALARY = U$ %.2lf\n",SALARY);
    return 0;
}

