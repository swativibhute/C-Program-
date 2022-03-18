#include<stdio.h>
int main(){
    int i=0,no,sum=0;
    printf("enter sum of 10 natural no:");
     scanf("%d",&no);
    do{
       
        sum=sum+i;
        i++;
       
    }while(i<=10);
     printf("%d",sum);
    return 0; 
}