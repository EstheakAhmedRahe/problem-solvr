
#include<stdio.h>
int main()
{
    int i,n,a[10],s=0;
   scanf("%d",&n);
   for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    if(n==a[i])
    s++;
   }
   if(s>0)printf("yes");
   else printf("no");

}

