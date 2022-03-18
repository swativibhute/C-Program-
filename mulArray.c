#include<stdio.h>
int main(){
    int a[10],n;
        
        printf("enter the value for table:\n");
         scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
       
        // printf("enter the value for table %d\n:" n);
        a[i]=n*(i+1);
    }
     for (int i = 0; i < 10; i++)
    {
       printf("%d*%d  = %d\n ",n,i+1,a[i]);
        // printf("enter the value for table %d\n:" n);
   
    }
    
}