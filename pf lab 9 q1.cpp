#include <stdio.h>

void recordStatus(int beds[3][5]) {
    for(int i = 0; i < 3; i++) {
        printf("Ward %d (1=Occupied, 0=Empty):\n", i+1);
        for(int j = 0; j < 5; j++) {
            printf(" Bed %d: ", j+1);
            scanf("%d", &beds[i][j]);
        }
    }
}

void countBeds(int beds[3][5]) {
    int occupied = 0, available = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            int *p = &beds[i][j];
            if(*p == 1) occupied++;
            else available++;
        }
    }
    printf("Occupied beds: %d\n", occupied);
    printf("Available beds: %d\n", available);
}

void displayStatus(int beds[3][5]) {
    for(int i = 0; i < 3; i++) {
        printf("Ward %d: ", i+1);
        for(int j = 0; j < 5; j++) {
            printf("%d ", beds[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int beds[3][5];
    printf("ward 1= general , ward 2= ICU , ward 3= private\n");
    recordStatus(beds);
    displayStatus(beds);
    countBeds(beds);
    return 0;
}

