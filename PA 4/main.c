/*
	Name: Bailey Wolber
	Email: bailey.wolber@wsu.edu
	Date: 2/21/2019
	Description: computer implementation of the game craps
*/

#include "source.h"

int main(void) {

	//initialize bank balance, game continue and seeds the random number
	double bankBalance = 0.0;
	int gameContinue = 1;
	srand(time(NULL));

	//bank balance initialization
	bankBalance = get_bank_balance();

	//main loop for the game
	while (gameContinue == 1) {
		int menuChoice = menu();

		//displays bank balance
		if (menuChoice == 1) {
			printBalance(bankBalance);

		}
		//prints the rules to the game (prints a link because I am lazy)
		else if (menuChoice == 2) {
			printRules();

		}
		//main game loop
		else if (menuChoice == 3) {

			//prompts user for wager amount and figures out if the amount is left in the users bank
			double wager = get_Wager_Amount();
			int checkWager = check_Wager_Amount(bankBalance, wager);

			if (checkWager == 1) {
				//intitializes dice, sum of dice and the point counter
				int d1 = 0, d2 = 0, sum = 0, point = 0;

				//rolls dice
				d1 = roll_Die();
				printf("First die roll is %d\n", d1);
				d2 = roll_Die();
				printf("Second die roll is %d\n", d2);

				//calculates sum of dice, and calculates if the point is a win or a loss
				sum = calculate_sum_dice(d1, d2);
				point = is_win_loss_or_point(sum);
				
				
				if (point == -1) {
					//loop if the game is a -1, only exits the loop is a win or a loss
					while (point == 2 || point == 1 || point < 0) {
						d1 = roll_Die();
						printf("First die roll is %d\n", d1);
						d2 = roll_Die();
						printf("Second die roll is %d\n", d2);
						sum = calculate_sum_dice(d1, d2);

						point = is_point_loss_or_neither(sum, point);
					}
				}
				if (point == 0 || point == 2) {
					bankBalance = adjust_bank_balance(bankBalance, wager, -1);
				}
				else {
					bankBalance = adjust_bank_balance(bankBalance, wager, 1);
				}
			}
			else {

			}

		}
		//exit game
		else if (menuChoice == 4) {
			gameContinue = 0;
		}
	}

	printf("Thanks for playing!");
	return 0; //indicates success
}