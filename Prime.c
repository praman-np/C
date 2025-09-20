#include<stdio.h>
int main(){
    int n,a=0;
    printf("enter a no:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if (n%i==0){
            a=a+1;
        }
    }
    if (a==2){
        printf("Prime no");
    }
    else{
        printf("not a prime no");
    }
    return 0;
}