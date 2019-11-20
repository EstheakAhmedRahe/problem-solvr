#include <stdio.h>
int main()
{
    double a,b,c,A,B,C,D,E,pi;
    pi=3.14159;
    scanf("%lf %lf %lf",&a,&b,&c);
    A=0.5*a*c;
    B=(c*c)*pi;
    C=0.5*c*(a+b);
    D=b*b;
    E=a*b;
    printf("TRIANGULO: %.3lf\n",A);
    printf("CIRCULO: %.3lf\n",B);
    printf("TRAPEZIO: %.3lf\n",C);
    printf("QUADRADO: %.3lf\n",D);
    printf("RETANGULO: %.3lf\n",E);
    return 0;
}

