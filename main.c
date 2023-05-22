#include <stdio.h>
#include <math.h>

int main() {
    double pi = 0;
    int i = 0;
    while (i < 10000000) {
        pi += 4*(pow(-1, i))/(2*i+1);
        i++;
        printf("%d회 반복: %9.9f\n", i, pi);
    }
    return 0;
}