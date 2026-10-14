
#include <stdio.h>

int main() {
    int A[10] = {10, 5, 20, 30, 6};
    int n = 5, pos = 3, value = 40;
    int i;

    for(i = n; i > pos; i--) {
        A[i] = A[i - 1];
    }

    A[pos] = value;
    n = n + 1;

    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
