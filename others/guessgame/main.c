#include<stdio.h>
#include<stdlib.h>

void Play(int bet, int *ptr){
	char C[3] = {'J', 'K', 'Q'};
	printf("Shuffling\n");
	srand(time(NULL));
	int i;
	for (i=0;i<5;i++){
		int x = rand() % 3;
		int y = rand() % 3;
		int temp = C[x];
		C[x] = C[y];
		C[y] = temp;
	
}
	int playerGuess;
	printf("What is the position of the Queen? 1, 2, or 3?\n");
	scanf("%d", &playerGuess);
	printf("You guessed %d\n", playerGuess);
	if  (C[playerGuess-1] == 'Q'){
		*ptr += bet*3;
		printf("You won, the cash you have now is %d\n", *ptr);}
	else{
		*ptr -= bet;
		printf("You lost, the cash you have now is %d\n", *ptr);
}
	printf("the positions were 1: %c, 2: %c, 3: %c \n", C[0], C[1], C[2]);
	return;}
int main(){
	int bet;
	int cash = 100;
	int *p = &cash;
//        print("You have cash: %d\n", cash);
	while (cash>0){
                printf("You have cash: %d\n", cash);
		printf("what is your bet\n");
		scanf("%d", &bet);
		if (bet < 0 || bet > cash){break;}
		Play(bet, p);
		printf("****************************************\n");
}
	return	0;}



