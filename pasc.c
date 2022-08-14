#include<stdio.h>
// function to print Pascal's Triangle
int PascalsTriangle(int n) {
    int ar[100][100];
    int i, j;
    for (i = 0; i < n; ++i) {
        // printing spaces
        for (j = 0; j < n - 1 - i; ++j) {
            printf(" ");
        }
        // calculating then printing the data of ith
        // row of Pascal's Trianle
        for (j = 0; j <= i; ++j) {
            if (j == 0 || j == i)
                ar[i][j] = 1;
            else
                ar[i][j] = ar[i - 1][j - 1] + ar[i - 1][j];
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the number of rows in Pascal's Trianle : ");
    scanf("%d", &n);
    PascalsTriangle(n);
    return 0;
}
