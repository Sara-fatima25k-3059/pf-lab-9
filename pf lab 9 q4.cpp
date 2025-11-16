#include <stdio.h>

void searchElement(int arr[3][4], int rows, int cols, int key) {
    int found = 0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            int *p = &arr[i][j];
            if(*p == key){
                printf("Element %d found at row %d, column %d\n", key, i, j);
                found = 1;
            }
        }
    }
    if(!found) printf("Element not found.\n");
}

int main() {
    int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    searchElement(arr,3,4,7);
    return 0;
}

