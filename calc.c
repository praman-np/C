#include<stdio.h>
int main(){
    float num1,num2,res;
    char optr;
    printf("Enter first no");
    scanf("%f",&num1);
    printf("Enter your operator (+,-,*,/):");
    scanf(" %c",&optr);
    printf("Enter second no:");
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
            if(num2!=0){
                res=num1/num2;
                printf("%f %c %f = %f",num1,optr,num2,res);
            }
            else
                printf("Error: Divison by 0");
            break;
        default:
            printf("Use vailt operator");
            return 1;
    }
    return 0;
}