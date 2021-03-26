#include "Account.h"
#include <stdio.h>

account_t accounts[10];

int main(void) {
	for (int i = 0; i < 10; i++) {
		accounts[i] = account_create(10000 + i, i * 100);
	}

	for (int i = 0; i < 10; i++) {
		printf("Account No: %d, Balance: %7.2f, Credit Limit: %7.2f\n", 
			account_getAccountNo(accounts[i]),
			account_getBalance(accounts[i]),
			account_getCreditLimit(accounts[i]));
	}
}

// Java
/*
Account accounts[] = new Account[10];

for (int i = 0; i < 10; i++) {
	accounts[i] = new Account(10000 + i, i * 100);
}

for (int i = 0; i < 10; i++) {
	System.out.println(
	accounts[i].getAccountNo(), 
	accounts[i].getBalance(), 
	accounts[i].getCreditLimit());
}
*/