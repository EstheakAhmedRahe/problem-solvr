#include<stdio.h>
int main(){
    int a,i,n,j;
    //scanf("%d",&n);
    char ch[3][10];
    for(i=0;i<3;i++){
        scanf("%s",ch[i]);
    }
    for(i=3-1;i>=0;i--){
        printf("%s\n",ch[i]);
    }
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){

        printf("%c\n",ch[i][j]);
        }
     }
}
