#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    long long int iterations = 1000000000; 
    long long int insideCircle = 0;
    double x, y, pi;
    int updateFrequency = 10000000; 
    int progress = 0;

    srand(time(NULL)); 

    for (long long int i = 1; i <= iterations; i++) {
        x = (double)rand() / RAND_MAX; 
        y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1.0) {
            insideCircle++;
        }
        if (i % updateFrequency == 0) {
            pi = (double)insideCircle / i * 4.0;
            progress = (int)((double)i / iterations * 100);
            printf("%d%% 진행.. 원주율 : %lf ", progress, pi);
            int numBars = progress / 5;
            for (int j = 0; j < 20; j++) {
                if (j < numBars) {
                    printf("■");
                }
                else {
                    printf("□");
                }
            }
            printf("\n");
        }
    }
    pi = (double)insideCircle / iterations * 4.0;
    printf("최종 계산된 원주율: %lf\n", pi);
    return 0;
}