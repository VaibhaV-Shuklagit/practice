#include <stdio.h>
int main() {
    int m, n, i, j; 
    printf("Enter the Number of Rows : ");
    scanf("%d", &m);
    printf("Enter the Number of columns : ");
    scanf("%d", &n);

    for (i = 1; i <= m; i++) { 
        for (j = 1; j <= n; j++) { 
            if (i == 1 || i == m || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" "); 
            }
        }
        printf("\n");
    }
    return 0;
}