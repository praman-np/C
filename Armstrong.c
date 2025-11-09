#include<stdio.h>
#include<math.h>
int armstrong(int num){
    int temp = num, last, sum=0,length=0;
    while(temp!=0){
        temp/=10;
        length++;
    }
    temp = num;
    while(temp !=0){
        last = temp % 10;
        sum +=round((pow(last, length)));
        temp/=10;
    }
    return sum==num;
    
}
int main(){
    for( int num=1;num<=1000;num++){
        if(armstrong(num)){
            printf("%d\n",num);
        }
    }
}