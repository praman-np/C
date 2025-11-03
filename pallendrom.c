#include<stdio.h>
void whil();
void fo();
int main(){
    whil();
    return 0;
}
void whil(){
    int a,b,c,d=0;
    printf("Enter a no");
    scanf("%d",&a);
    c=a;
    while (c!=0){
        b=c%10;
        d=d*10+b;
        c=c/10;
    }
    a==d?printf("pallendrom"):printf("not a pallindrom");
}
void fo(){
    int a,b,c,d=0,e;
    printf("Enter a no:");
    scanf("%d",&a);
    c=a;
    e=str(a);
    int len=strlen(str(e));
    for(int i=0;i<=len;++i){
        b=c%10;
        d=d+b*10;
        c=c/10;
    }
    a==d?printf("Pallendrom"):printf("Not a pallindrom");
}

