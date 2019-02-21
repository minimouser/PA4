#pragma once
#include <stdio.h>
#include <math.h>

void printRules(void);
int menu(void);
double get_bank_balance(void);
void printBalance(double balance);
double get_Wager_Amount(void);
int check_Wager_Amount(double bank, double wager);
int calculate_sum_dice(int d1, int d2);
int roll_Die(void);