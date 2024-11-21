#include <stdio.h>

void solve() {
    int T;
    scanf("%d", &T); // S? lu?ng test
    for (int t = 1; t <= T; t++) {
        int N, M;
        scanf("%d %d", &N, &M); // Kích thu?c ma tr?n A
        int A[N][M];

        // Nh?p ma tr?n A
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &A[i][j]);
            }
        }

        // Tính ma tr?n tích C = A * A^T
        int C[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                C[i][j] = 0; // Kh?i t?o ph?n t?
                for (int k = 0; k < M; k++) {
                    C[i][j] += A[i][k] * A[j][k];
                }
            }
        }

        // In k?t qu?
        printf("Test %d:\n", t);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
}

int main() {
    solve();
    return 0;
}
