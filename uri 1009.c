#include <stdio.h>
int main ()
{
    char ch[10];
    gets(ch);
    double a,b,c,d;
    scanf("%lf",&a);
    scanf("%lf",&b);
    c=(b*15)/100;
    d=a+c;
    printf("TOTAL = R$ %.2lf\n",d);
    return 0;
}
