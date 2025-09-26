#include <stdio.h>

int main()
{
    int m, n, p, q, i, j, k;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);

    int A[m][n];
    printf("Enter elements of Matrix A (row-wise):\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);

    int B[p][q];
    printf("Enter elements of Matrix B (row-wise):\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    if (n != p)
    {
        printf("\nMatrix multiplication not possible!\n");
        printf("Reason: Columns of A (%d) not equal to Rows of B (%d)\n", n, p);
        return 0;
    }

    int C[m][q];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
