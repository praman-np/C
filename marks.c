#include<stdio.h>
int main(){
    float markc,markjava,markscpp;
    printf("total 100 \n");
    printf("Enter the marks in c:");
    scanf("%f",&markc);
    printf("Enter marks in java:");
    scanf("%f",&markjava);
    printf("Enter marks in CPP:");
    scanf("%f",&markscpp);
    float avg=(markscpp+markjava+markc)/3;
    float perc=(markscpp+markjava+markc)/3;
    printf("percentage is %f",perc);
    printf(" and average is %f",avg);
    return 0;
}