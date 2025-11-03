#include<stdio.h>
int main(){
    float num1,num2,res;
    char optr;
    printf("Enter two no");
    scanf("%f",&num1);
    printf("Enter your operator (+,-,*,/):");
    scanf(" %c",&optr);
    printf("Enter a no:");
    scanf("%f",&num2);
    switch(optr){
        case '+':
            res=num1+num2;
            printf("%f %c %f = %f",num1,optr,num2,res);
            break;
        case '-':
            res=num1-num2;
            printf("%f %c %f = %f",num1,optr,num2,res);
            break;
        case '*':
            res=num1*num2;
            printf("%f %c %f = %f",num1,optr,num2,res);
            break;
        case '/':
            res=num1/num2;
            printf("%f %c %f = %f",num1,optr,num2,res);
            break;
        default:
            printf("Use vailt operator");
            break;
    }
    return 0;
}