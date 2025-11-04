#include<stdio.h>
int main(){
    int n;
    long long fact=1;
    printf("Enter a no:");
    scanf("%d",&n);
    if(n<0){
        printf("Factiorial does notexist for negative no");
    }
    else{
        for(int i=1;i<=n;i++){
            fact= fact*i;
        }
        printf("factorial of %d is %lld",n,fact);
    }
    return 0;
}