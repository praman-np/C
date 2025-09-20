#include<stdio.h>
int main(){
    float temp;
    char t;
    printf("Is it farenhite or celsius? write in f/c");
    scanf("%c",&t);
    if(t=='c'){
        printf("enter the temp in celsius:");
        scanf("%f",&temp);
        float fare=(temp*9/5)+32;
        printf("the temp in farenhite is %f",fare);
    }
    else if(t=='f'){
        printf("enter the temp in farenhite:");
        scanf("%f",&temp);
        float celc=(temp-32)*5/9;
        printf("the temp in celsius is %f",celc);

    }
    return 0;
    
}