#include<stdio.h>
void add();
void product();
void divide();
int main(){
    int c=0;
    while(c!=4){
        printf("\n");
        printf("1:add \n");
        printf("2:multiply \n");
        printf("3:divide \n");
        printf("4:exit \n");
        printf("enter your choice ");
        scanf("%d",&c);
        if (c==1){
            add();
        }
        else if(c==2){
            product();
        }
        else if(c==3){
            divide();
        }
        else if(c==4){
            printf("exiting program");
            break;
        }
        else{
            printf("invalid input");
        }
    }
}
void add(){
    int a,b;
    printf("enter 1 no:");
    scanf("%d",&a);
    printf("enter 2 no:");
    scanf("%d",&b);
    printf("sum of two no is %d ",a+b);
    printf("\n");
}

void product(){
    int a,b;
    printf("enter 1 no:");
    scanf("%d",&a);
    printf("enter 2 no:");
    scanf("%d",&b);
    printf("product of two no is %d",a*b);
    printf("\n");
}
void divide(){
    int a,b;
    printf("enter 1 no:");
    scanf("%d",&a);
    printf("enter 2 no:");
    scanf("%d",&b);
    printf("division of two no is %d",a/b);
    printf("\n");
}