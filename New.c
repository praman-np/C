#include<stdio.h>
int main(){
    for(int i=1;i<=5;++i){
        for(int j=1;j<=i;++j){
            int space=5-i;
            if(j==1){
                for(int k=1;k<=space;++k){
                    printf(" ");
                }
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}