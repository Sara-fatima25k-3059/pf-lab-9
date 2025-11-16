#include <stdio.h>

void deposit(float *balance, int index, float amount) {
    balance[index] += amount;
}

void withdraw(float *balance, int index, float amount) {
    if(balance[index] >= amount)
        balance[index] -= amount;
    else
        printf("Insufficient balance!\n");
}

float averageBalance(float *balance, int size) {
    float sum = 0;
    for(int i = 0; i < size; i++)
        sum += *(balance + i);
    return sum / size;
}

int main() {
    float balance[5] = {1000, 2000, 1500, 2500, 3000};
    deposit(balance, 2, 500); 
    withdraw(balance, 1, 1000); 

    for(int i = 0; i < 5; i++)
        printf("Account %d balance: %.2f\n", i+1, *(balance + i));

    printf("Average balance: %.2f\n", averageBalance(balance, 5));
    return 0;
}

