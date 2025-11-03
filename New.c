#include<stdio.h>
int main(){
    float a,b,c,d,e,total=0,percentage;
    printf("Total marks=100");
    printf("Enter marks in 5 subject:");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    percentage=total/5;
    printf("%f",percentage);
    if(percentage<=100 && percentage>=90){
        printf("Grade A");
    }
    else if(percentage>=80 && percentage<90){
        printf("Grade B");
    }
    else if(percentage>=60 && percentage<80){
        printf("Grade C");
    }
    else{
        printf("D");
    }
    return 0;
}