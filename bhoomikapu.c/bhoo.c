
#include <stdio.h>

int main() {
    int A[10] = {10, 5, 20, 40, 30, 6};
    int n = 6, pos = 3;
    int i;

    for(i = pos; i < n - 1; i++) {
        A[i] = A[i + 1];
    }

    n = n - 1;

    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
