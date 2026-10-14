#include <stdio.h>

#define MAX 15

int main()
{
    int pascal[MAX][MAX];
    int n, i, j;

    printf("Ateh que linha o triangulo vai? (1 a %d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Valor invalido! Digite um numero entre 1 e %d.\n", MAX);
        return 1;
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {

                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    printf("\nTriangulo de Pascal com %d linhas:\n\n", n);
    for (i = 0; i < n; i++) {

        for (j = 0; j < n - i - 1; j++) {
            printf("  ");
        }

        for (j = 0; j <= i; j++) {
            printf("%4d", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
