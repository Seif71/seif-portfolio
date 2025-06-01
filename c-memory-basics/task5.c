/**
 * 
 * task 5
 * 
 * SeifEldin Abdelhamid
 * 02/02/2025
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

// Define a struct for a bank account
struct BankAccount {
    char name[20];  // Account holder's name (max 19 chars + null terminator)
    int balance;    // Account balance
};

int main() {
    struct BankAccount account;  // Declare a BankAccount variable
    account.balance = 0;  // Initialize balance to 0

    printf("Please input your name for a new bank account: ");
    fgets(account.name, sizeof(account.name), stdin);  // Read user input (including newline)

    // Remove newline character if it exists
    int len = strlen(account.name);
    if (len > 0 && account.name[len - 1] == '\n') {
        account.name[len - 1] = '\0';  // Replace newline with null terminator
    }

    // Print confirmation message
    printf("Thank you %s, your new account has been initialized with balance %d.\n", 
           account.name, account.balance);

    // Use an unsigned char* to inspect the memory contents of account
    unsigned char *ptr = (unsigned char*)&account;
    printf("\nMemory layout of struct BankAccount:\n");

    for (size_t i = 0; i < sizeof(struct BankAccount); i++) {
        printf("%02X ", ptr[i]);  // Print each byte in hexadecimal format
        if ((i + 1) % 8 == 0) printf("\n");  // Newline every 8 bytes for readability
    }

    return 0;
}
