#include <stdio.h>

int log2(int n) {
    if (n < 0) {
        return -2;
    }

    if (n == 0) {
        return -1;
    }

    if ((n & (n - 1)) != 0) {
        return -1;
    }

    int res = 0;

    while (n > 1) {
        n >>= 1;
        res++;
    }

    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", log2(n));

    return 0;
}