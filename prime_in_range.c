#include<stdio.h>
int main(){
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int c=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                c+=1;
            }
        }
        if (c==2){
            printf("%d is a prime no in range of %d\n",i,n);
        }
    }
}