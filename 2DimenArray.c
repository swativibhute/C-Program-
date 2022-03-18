#include<stdio.h>
int main(){
    int a[3][3][3];
    printf("values in the array: \n");
 
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
     printf("display 2-d array:\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){  
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    // display();
    return 0;
}
// display(){
//     for(i=0;i<2;i++){
//         for(j=0;j<=1;j++){
//             scanf("%d", &a[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<=1;j++){
//             printf("%d", a[i][j]);
//         }
//         printf("\n")
//     }
// }