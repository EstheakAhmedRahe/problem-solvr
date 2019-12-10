#include<stdio.h>
int s(int a){
    if(a==1)return 1;
    int c=a*s(a-1);
    return c;

}
int main()
{
    int x;
    while(scanf("%d",&x)==1)
    printf("ans=%d\n",s(x));
}
