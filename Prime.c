#include<stdio.h>
int isPrime(int n){
    int a=0;
    for (int i=2;i<n;i++){
        if (n%i==0){
            a+=1;
        }
    }
    if (a==1){
        printf("%d is not a prime no",n);
    }
    else{
        printf("%d is a prime no",n);
    }
    return 0;

}

int main(){
    int n;
    printf("enter a no:");
    scanf("%d",&n);
    isPrime(n);
    return 0;
}