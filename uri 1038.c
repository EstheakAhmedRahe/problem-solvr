#include<stdio.h>
int main()
{
    float X,Y,z;
    scanf("%f %f",&X,&Y);
    if(X==1){
        z=4.00*Y;
        printf("Total: R$ %.2f\n",z);
    }
    else if(X==2){
        z=4.50*Y;
        printf("Total: R$ %.2f\n",z);
    }
    else if(X==3){
        z=5*Y;
        printf("Total: R$ %.2f\n",z);
    }
    else if(X==4){
        z=2*Y;
        printf("Total: R$ %.2f\n",z);
    }
    else if(X==5){
        z=1.5*Y;
        printf("Total: R$ %.2f\n",z);
    }
    return 0;
}
