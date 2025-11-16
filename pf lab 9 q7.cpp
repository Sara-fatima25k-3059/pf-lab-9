#include <stdio.h>

void inputRuns(int runs[11]) {
    for(int i=0;i<11;i++){
        printf("Enter runs for player %d: ", i+1);
        scanf("%d",&runs[i]);
    }
}

void totalAverage(int *runs, int size, int *total, float *avg) {
    *total = 0;
    for(int i=0;i<size;i++) *total += *(runs+i);
    *avg = *total / (float)size;
}

void highestScorer(int *runs, int size, int *index) {
    int max = *runs;
    *index = 0;
    for(int i=1;i<size;i++){
        if(*(runs+i) > max){
            max = *(runs+i);
            *index = i;
        }
    }
}

int main() {
    int runs[11];
    int total, index;
    float avg;

    inputRuns(runs);
    totalAverage(runs,11,&total,&avg);
    highestScorer(runs,11,&index);

    printf("Total runs: %d\nAverage: %.2f\n", total, avg);
    printf("Highest scorer: Player %d with %d runs\n", index+1, runs[index]);

    return 0;
}

