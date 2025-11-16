#include <stdio.h>

int main() {
    int att[4][5];    
    int i, j, total;
    float percent;

    for(i = 0; i < 4; i++){
        printf("Enter attendance for student %d (5 classes, 1=present, 0=absent): \n", i+1);
        for(j = 0; j < 5; j++){
            scanf("%d", &att[i][j]);
            
        }
    }

    for(i = 0; i < 4; i++){
        total = 0;
        for(j = 0; j < 5; j++){
            total += att[i][j];   
        }
        percent = (total / 5.0) * 100;
        printf("Student %d attendance: %.2f%%\n", i+1, percent);
        if(percent < 75)
            printf("Warning: Attendance below 75%%!\n");
    }

    return 0;
}

