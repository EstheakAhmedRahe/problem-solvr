#include <stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    int b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y;
    b=a*100;
    c=b/10000;
    d=b%10000;
    e=d/5000;
    f=d%5000;
    g=f/2000;
    h=f%2000;
    i=h/1000;
    j=h%1000;
    k=j/500;
    l=j%500;
    m=l/200;
    n=l%200;
    o=n/100;
    p=n%100;
    q=p/50;
    r=p%50;
    s=r/25;
    t=r%25;
    u=t/10;
    v=t%10;
    w=v/5;
    x=v%5;
    y=x/1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",c);
    printf("%d nota(s) de R$ 50.00\n",e);
    printf("%d nota(s) de R$ 20.00\n",g);
    printf("%d nota(s) de R$ 10.00\n",i);
    printf("%d nota(s) de R$ 5.00\n",k);
    printf("%d nota(s) de R$ 2.00\n",m);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",o);
    printf("%d moeda(s) de R$ 0.50\n",q);
    printf("%d moeda(s) de R$ 0.25\n",s);
    printf("%d moeda(s) de R$ 0.10\n",u);
    printf("%d moeda(s) de R$ 0.05\n",w);
    printf("%d moeda(s) de R$ 0.01\n",y);
    return 0;

}
