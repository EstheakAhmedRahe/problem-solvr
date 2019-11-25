#include <stdio.h>
int main()
{
    int a,b,s,m,h;
    scanf("%d",&a);
    b=a/60;
    s=a%60;
    h=b/60;
    m=b%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}


