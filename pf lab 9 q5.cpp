#include <stdio.h>

void printData(void *data, char datatype) {
    switch(datatype) {
        case 'i': printf("%d\n", *(int*)data); break;
        case 'f': printf("%.2f\n", *(float*)data); break;
        case 'c': printf("%c\n", *(char*)data); break;
        default: printf("Unknown type\n");
    }
}

int main() {
    int id = 1455;
    float price = 49.77;
    char category = 'J';

    printData(&id, 'i');
    printData(&price, 'f');
    printData(&category, 'c');

    return 0;
}

