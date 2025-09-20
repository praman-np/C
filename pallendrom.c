#include<stdio.h>
int main(){
    int a,b,c,d=0;
    printf("Enter a no");
    scanf("%d",&a);
    c=a;
    while (c!=0){
        b=c%10;
        d=d*10+b;
        c=c/10;
    }
    if (d==a){
        printf("pallendrome");
    }
    else{
        printf("not a pallendrome");
    }
    return 0;
}