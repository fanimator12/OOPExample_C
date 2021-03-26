#pragma once

typedef struct account* account_t;

typedef enum {
	ACCOUNT_OK,
	ACCOUNT_OVER_MAX_CREDIT_LIMIT,
	ACCOUNT_NOT_INSTANTIATED,
	ACCOUNT_NOT_POSSIBLE_TO_DEPOSIT_NEGATIVE_AMOUNT
}accountStatus_t;

account_t account_create(int accountNo, double creditLimit);

accountStatus_t account_destroy(account_t self);

//accountStatus_t account_withdraw(account_t self, double amount);

accountStatus_t account_deposit(account_t self, double amount);

double account_getBalance(account_t self);

double account_getCreditLimit(account_t self);

int account_getAccountNo(account_t self);