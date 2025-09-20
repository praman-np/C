#include<stdio.h>
int main(){
    int n,sum=0,s=0;
    printf("enter a no:");
    scanf("%D",&n);
    int i=1;
    //using while loop
    while(i<=n){
        sum=i+sum;
        i++;
    }
    printf("%d \n",sum);
    //using for loop
    for(i=1;i<=n;i++){
        s=i+s;
    }
    printf("%d",s);
}