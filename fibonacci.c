#include<stdio.h>
int main(){
    int a=0,b=1,i=1,c,n;
    printf("enter the no fo terms:");
    scanf("%d",&n);
    while (i<=n){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return 0;
}