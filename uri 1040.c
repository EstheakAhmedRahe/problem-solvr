#include <stdio.h>
int main()
{
    float p,q,r,s,a,b,c,d,x,y,z;
    scanf("%f %f %f %f",&p,&q,&r,&s);
    a=p*2;
    b=q*3;
    c=r*4;
    d=s*1;
    x=(a+b+c+d)/10;
    printf("Media: %.1f\n",x);
    if(x<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(x>=7.0){
        printf("Aluno aprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%f",&y);
        printf("Nota do exame: %.1f\n",y);
        z=(x+y)/2;
    if(z<5)printf("Aluno reprovado.\n");
    else if(z>5)printf("Aluno aprovado.\n");
     printf("Media final: %.1f\n",z);
    }
    return 0;
}
