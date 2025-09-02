#include <stdio.h>

int main() {
    int a[50], b[50], c[50];
    int n1, n2, i, j, k = 0;

    printf("Enter number of elements in Set A: ");
    scanf("%d", &n1);
    printf("Enter elements of Set A: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in Set B: ");
    scanf("%d", &n2);
    printf("Enter elements of Set B: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                int found = 0;
                for(int m = 0; m < k; m++) {
                    if(c[m] == a[i]) {
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    c[k++] = a[i];
                }
            }
        }
    }

    printf("Intersection of Set A and Set B: { ");
    for(i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
    printf("}\n");

    return 0;
}
