/*

*/

#include "source.h"

//prints the rules to the game
void printRules(void) {
	printf("http://www.ildado.com/craps_rules.html \n");
}

//prints the menu and returns the value from the input that the user inputs
int menu(void) {
	int menuChoice = 0;

	while (menuChoice < 1 || menuChoice > 5) {
		printf("Main Menu \n 1. Check Balance \n 2. Rules \n 3. Play game \n 4. Exit Game\n type your selection: ");
		scanf("%d", &menuChoice);
	}

	return menuChoice;
}

//accepts the balance and then prints out the current balance
void printBalance(double balance) {
	printf("\nYour balance is: $%0.2lf\n", balance);
}

//prompts user for the amount they want in their bank
double get_bank_balance(void) {
	double bank = 0.0;

	printf("how much is in your bank?: ");
	scanf("%lf", &bank);

	return bank;
}

//gets the amount that the user wants to wager returns the amount the user wants to wager
double get_Wager_Amount(void) {
	double wager = 0.0;
	printf("How much would you like to wager?: ");
	scanf("%lf", &wager);

	return wager;
}


//checks and sees if the wager amount is more then the user has in their bank. if the wager is 
int check_Wager_Amount(double bank, double wager) {
	if (wager <= bank) {
		return 1;
	}
	else {
		return 0;
	}
}

//randomly chooses a number on a 6 sided die returns that random number 
int roll_Die(void) {
	int die = 1;

	return die;
}

int calculate_sum_dice(int d1, int d2) {
	int sum = 0;
	sum = d1 + d2;

	return sum;
}
