/*

*/

#include "source.h"

int main(void) {
	double bankBalance = 0.0;
	int gameContinue = 1;

	bankBalance = get_bank_balance();

	while (gameContinue == 1) {
		int menuChoice = menu();

		if (menuChoice == 1) {
			printBalance(bankBalance);
		} else 
			if (menu == 2) {
				printRules();
			}else 
				if (menu == 3) {
					double wager = get_Wager_Amount();
					int checkWager = check_Wager_Amount(bankBalance, checkWager);
					if (checkWager == 1) {

					}
					else {

					}
				}else
					if (menu == 4) {
						gameContinue = 0;
					}
	}

	printf("Thanks for playing!");
	return 0; //indicates success
}