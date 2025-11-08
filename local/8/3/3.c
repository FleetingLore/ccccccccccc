#include<stdio.h>

#define N 40

int ReadScore(int score[]);
int FindMax(int score[], int n);

int main() {
    int score[N], max, n;
    n = ReadScore(score);
    printf("Total students are %d\n", n);
    max = FindMax(score, n);
    printf("The heighest score is %d\n", max);

    return 0;
}

int ReadScore(int score[]) {
    int i = -1;
    do {
        i += 1;
        printf("Input score:");
        scanf("%d", &score[i]);
    } while (score[i] >= 0);

    return i;
}

int FindMax(int score[], int n) {
    int max = score[0];
    for(int i = 1; i < n; i++) {
        if (score[i] > max) {
            max = score[i];
        }
    }

    return max;
}
