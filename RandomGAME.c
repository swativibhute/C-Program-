#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1; //generates random number
    //printf("The number is %d ",number);
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Lower number plzzzz\n");
        }
        else if(guess<number)
        {
            printf("higher number plzzzz\n");
        }
        else
        {
            printf(" ******Congratualtion****** you are guessed it %d attempts \n" ,nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}