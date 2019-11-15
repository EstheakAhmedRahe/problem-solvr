#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,g,h,sum;
    scanf ("%lf %lf %lf",&a,&b,&c);
    g=b*c;
    scanf("%lf %lf %lf",&d,&e,&f);
    h=e*f;
    sum=g+h;
    printf("VALOR A PAGAR: R$ %.2lf\n",sum);
    return 0;
}
