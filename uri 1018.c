#include <stdio.h>
int main()
{
    int i ,m,n;
    int ara[7]={100,50,20,10,5,2,1};
    int br[7];
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=0;i<7;i++){
        br[i]=n/ara[i];
        n=n%ara[i];
    }
    for(m=0;m<7;m++){
        printf("%d nota(s) de R$ %d,00\n",br[m],ara[m]);
    }
    return 0;
}
