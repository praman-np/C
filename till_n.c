#include<stdio.h>
int main(){
    int n,i=0;
    printf("enter a no:");
    scanf("%d",&n);
    //using while loop
    while(i<=n){
        printf("%d \n",i);
        i++;
    }
    //using for loop
    for(i=0;i<=n;i++){
        printf("%d \n",i);
    }
    //backward
    for(i=n;i>=0;i--){
        printf("%d \n",i);
    }
}