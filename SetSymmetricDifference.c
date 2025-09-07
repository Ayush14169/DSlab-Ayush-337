#include <stdio.h>

int main() {
    int n, m;
    int a[50], b[50], c[100];
    int k = 0;

    printf("Enter number of elements in set A: ");
    scanf("%d", &n);
    printf("Enter elements of set A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in set B: ");
    scanf("%d", &m);
    printf("Enter elements of set B:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            c[k++] = a[i];
        }
    }

    for (int i = 0; i < m; i++) {
        int found = 0;
        for (int j = 0; j < n; j++) {
            if (b[i] == a[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            c[k++] = b[i];
        }
    }

    printf("Symmetric Difference: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
