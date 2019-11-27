#include <stdio.h>
int main()
{
    float a,b,c,d,e,f;
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d<0){
        printf("Impossivel calcular\n");
    }
    else if(a==0){
        printf("Impossivel calcular\n");
    }
    else{
        e=(-b+sqrt(d))/(2*a);
        f=(-b-sqrt(d))/(2*a);
        printf("R1 = %.5f\n",e);
        printf("R2 = %.5f\n",f);
    }
    return 0;
}
