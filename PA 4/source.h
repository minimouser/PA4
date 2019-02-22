#pragma once
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void printRules(void);
int menu(void);
double get_bank_balance(void);
void printBalance(double balance);
double get_Wager_Amount(void);
int check_Wager_Amount(double bank, double wager);
int calculate_sum_dice(int d1, int d2);
int roll_Die(void);
int is_win_loss_or_point(int sum_dice);
double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract);
int is_point_loss_or_neither(int sum_dice, int point_value);