/*

*/

#include "source.h"

//prints the rules to the game
void printRules(void) {
	printf(" A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3, 4, 5, and 6 spots. After the dice have come to rest, the sum of the spots on the two upward faces is calculated. If the sum is 7 or 11 on the first throw, the player wins. If the sum is 2, 3, or 12 on the first throw (called craps), the player loses (i.e. the house wins). If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then the sum becomes the player's point. To win, you must continue rolling the dice until you make your point. The player loses by rolling a 7 before making the point.\n");
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
	int die = 0;
	die = (rand() % 6) + 1;
	return die;
}

//calculates the sum of the 2 dice rolls
int calculate_sum_dice(int d1, int d2) {
	int sum = 0;
	sum = d1 + d2;

	return sum;
}

//checks if the die roll is a win or a loss, returns 1 if the player wins, returns 0 if they loose, 
//and returns -1 if the player wins a point
int is_win_loss_or_point(int sum_dice) {
	int return_Value = NULL;

	if (sum_dice == 7 || sum_dice == 11) {
		return_Value = 1;
	}
	else if (sum_dice == 2 || sum_dice == 3 || sum_dice == 12) {
		return_Value = 0;
	}
	else {
		return_Value = -1;
	}

	return return_Value;
}

//adjusts the bank balance, inputs the bank balance, wager, and if it is added and subtracted then the
//bank balance is returned
double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract) {
	double new_Bank_Balance = 0.0;

	if (add_or_subtract > 0) {
		new_Bank_Balance = bank_balance + wager_amount;
	}
	else {
		new_Bank_Balance = bank_balance - wager_amount;
	}

	return new_Bank_Balance;
}

//Keeps track of the points, continues playing.
int is_point_loss_or_neither(int sum_dice, int point_value) {
	int point = 0;
	point = is_win_loss_or_point(sum_dice);

	if (point == 0) {
		point_value = 2;
	}
	else {
		point_value = point + point_value;
	}


	return point_value;
}