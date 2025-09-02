#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2, n, i, j, k = 0, found =0;

    printf("Enter number of elements in Set A: ");
    scanf("%d", &n1);
    printf("Enter elements of Set A: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
        c[k++] = a[i]; 
    }

    printf("Enter number of elements in Set B: ");
    scanf("%d", &n2);
    printf("Enter elements of Set B: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
        for(j = 0; j < k; j++) {
            if(c[j] == b[i]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            c[k++] = b[i];
        }
    }

    printf("Union of Set A and Set B: { ");
    for(i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
    printf("}\n");

    return 0;
}

