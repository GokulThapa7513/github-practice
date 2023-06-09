#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int guessrandom(int);

int main(){
    int n,num;
    srand(time(0));
    num= rand()%100-1;
    printf("%d",num);
    guessrandom(num);
    
    
    return 0;

}
int guessrandom(int num){
    int guess;
    do
    {
    printf("Enter the guess number : ");
    scanf("%d",&guess);
    if (guess>num){
        printf("Please enter lower number");
    }
    else if(guess<num){
        printf("Please enter higher number");
    }
    else{
        printf("You guessed the correct number");
    }
    } while (guess!=num);
}
