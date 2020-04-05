#include <stdio.h>

int main() {
    int Ar, Ac;
    int Br, Bc;
    printf("Type the number of rows in the matrix A: ");
    scanf("%d", & Ar);
    printf("Type the number of columns in the matrix A: ");
    scanf("%d", & Ac);
    printf("Type the number of rows in the matrix B: ");
    scanf("%d", & Br);
    printf("Type the number of columns in the matrix B: ");
    scanf("%d", & Bc);
    printf("Type the values in the matrix A\n");
    printf("\n");
            int A[Ar][Ac], B[Br][Bc], C[Ar][Bc];
            int i, j, k;
        if ((Ac == Br) && (Ar + Br) / 2 <= 10 && (Ac + Bc) / 2 <= 10) {
            for (i = 0; i < Ar; i++) {
                for (j = 0; j < Ac; j++) {
                    printf("(%d, %d): ", i + 1, j + 1);
                    scanf("%d", & A[i][j]);
                }
            }
            printf("Type the values in the matrix B\n");
            for (i = 0; i < Br; i++) {
                for (j = 0; j < Bc; j++) {
                    printf("(%d, %d): ", i + 1, j + 1);
                    scanf("%d", & B[i][j]);
                }
            }
            for (i = 0; i < Ar; i++) {
                for (j = 0; j < Bc; j++) {
                    C[i][j] = 0;
                    for (k = 0; k < Ac; k++) {
                        C[i][j] += (A[i][k] * B[k][j]);
                    }
                }
            }
            printf("AxB = C\n");
            for (i = 0; i < Ar; i++) {
                printf("\n");
                for (j = 0; j < Bc; j++) {
                    printf("%6d", C[i][j]);
                }
            }
        } else {
            printf("The number of rows of matrix A, is different than columns of matrix B\n");
        }
    printf("\n");
    
}
