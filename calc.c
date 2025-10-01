#include<stdio.h>
int main(){
    int a,c;
    char op;
    printf("Enter two no");
    scanf("%d",&a);
    printf("Enter a no:");
    scanf("%d",&c);
    printf("Enter your operator: +,-,*,/:");
    scanf("%s",&op);
    if(op=='+'){
        int sum=a+c;
        printf("The sum of two no is:%d %c %d = %d",a,op,c,sum);
    }
    else if(op=='-'){
        int sub=a-c;
        printf("The difference of two no is:%d %c %d = %d",a,op,c,sub);
    }
    else if(op=='*'){
        int mul=a*c;
        printf("The multiplication of two no is:%d %c %d=%d",a,op,c,mul);
    }
    else if(op=='/'){
        int div=a/c;
        printf("The quorient of two no is:%d %c %d %d",a,op,c,div);
    }
    else{
        printf("enter a valid operator");
    }
    return 0;
}