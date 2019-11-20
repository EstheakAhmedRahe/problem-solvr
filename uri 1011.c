#include <stdio.h>
int main()
{
    double pi,R,VOLUME;
    pi=3.14159;
    scanf("%lf",&R);
    VOLUME=pi*R*R*R*4/3;
    printf("VOLUME = %.3lf\n",VOLUME);
    return 0;
}

