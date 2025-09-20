#include<stdio.h>
int main(){
    int a,s=0;
    while(1){
        printf("\n");
        printf("XYz Resturant \n");
        printf("1.Momos (RS 80) \n");
        printf("2.Chowmien (Rs 70) \n");
        printf("3.Chole Bhature (Rs 40)\n");
        printf("4.Grilled Cheese sandwich (Rs 80)\n");
        printf("5.Coca col(Rs 40)\n");
        printf("6.Finish Order\n");
        printf("\nEnter your choice:");
        scanf("%d",&a);
        if(a==1){
            int q;
            printf("Enter the quantity of momo:");
            scanf("%d",&q);  
            printf("\ncurrent bill= %d",s=s+q*80);
            printf("\n");
        } 
        else if(a==2){
            int q;
            printf("Enter the quantity of chowmien:");
            scanf("%d",&q);
            printf("\ncurrent bill= %d",s=s+q*70);
            printf("\n");
        }
        else if(a==3){
            int q;
            printf("Enter the quantity of chole bhature:");
            scanf("%d",&q);
            printf("current bill= %d",s=s+q*40);
            printf("\n");
        }
         else if(a==4){
            int q;
            printf("Enter the quantity of Grilled cheese sandwich:");
            scanf("%d",&q);
            printf("\ncurrent bill= %d",s=s+q*80);
            printf("\n");       
         }
         else if(a==5){
            int q;
            printf("Enter the quanity of coca cola");
            scanf("%d",&q);
            printf("\ncurrent bill=%d",s=s+q*40);
            printf("\n");
         }
         else if(a==6){
            if(s<700){
                printf("\n");
                printf("total bill= %d \n",s);
                break;
            }

            else if(s>700 && s<1500){
                printf("\n");
                printf("Total bill= %d \n",s);
                printf("discounted bill= %d \n",s-(s*10/100));
                break;
            }
            else if(s>1500){
                printf("\n");
                printf("Total bill= %d \n",s);
                printf("Discounted bill= %f \n",s-(s*10/100));
                break;
            }
         }
        else{
            printf("Wrong input \n");
        }
    }
        
    return 0;
}