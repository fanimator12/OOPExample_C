#include "Account.h"
#include <stdlib.h>

typedef struct account {
	int accountNo;
	double creditLimit;
	double balance;
} account;

// ---------------------------------------------------------------------

account_t account_create(int accountNo, double creditLimit) {
	account_t acc = malloc(sizeof(account));

	if (NULL == acc) {
		return NULL;
	}

	acc->accountNo = accountNo;
	acc->creditLimit = creditLimit;
	acc->balance = 0.0;

	return acc;
}

// ---------------------------------------------------------------------

accountStatus_t account_destroy(account_t self) {

	if (NULL == self) {
		return ACCOUNT_NOT_INSTANTIATED;
	}

	free(self);
	return ACCOUNT_OK;
}

// ---------------------------------------------------------------------

accountStatus_t account_deposit(account_t self, double amount) {

	if (NULL == self) {
		return ACCOUNT_NOT_INSTANTIATED;
	}

	if (0 > amount) {
		return ACCOUNT_NOT_POSSIBLE_TO_DEPOSIT_NEGATIVE_AMOUNT;
	}

	self->balance += amount;
	return ACCOUNT_OK;
}

// ---------------------------------------------------------------------

double account_getBalance(account_t self) {
	if (NULL == self) {
		return ACCOUNT_NOT_INSTANTIATED;
	}

	return self->balance;
}

// ---------------------------------------------------------------------

double account_getCreditLimit(account_t self) {
	if (NULL == self) {
		return ACCOUNT_NOT_INSTANTIATED;
	}

	return self->creditLimit;
}

// ---------------------------------------------------------------------

int account_getAccountNo(account_t self) {
	if (NULL == self) {
		return ACCOUNT_NOT_INSTANTIATED;
	}

	return self->accountNo;
}