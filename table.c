#include<stdio.h>
int main(){
    int num,range;
    printf("enter a no:");
    scanf("%d",&num);
    printf("Enter the range:");
    scanf("%d",&range);
    for(int i=1;i<=range;i=i+1){
        printf("%d X %d =%d \n",num,i,num*i);
    }
    return 0;

}