#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter two numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Enter your operator: +,-,*,/:");
    scanf("%s",&op);
    printf("%d",b);
    if(op=='+'){
        int sum=a+b;
        printf("The sum of two no is:%d %c %d = %d",a,op,b,sum);
    }
    else if(op=='-'){
        int sub=a-b;
        printf("The difference of two no is:%d %c %d = %d",a,op,b,sub);
    }
    else if(op=='*'){
        int mul=a*b;
        printf("The multiplication of two no is:%d %c %d=%d",a,op,b,mul);
    }
    else if(op=='/'){
        int div=a/b;
        printf("The quorient of two no is:%d %c %d %d",a,op,b,div);
    }
    else{
        printf("enter a valid operator");
    }
    return 0;
}