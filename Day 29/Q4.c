#include <stdio.h>

int main() {
    int id[10], qty[10], n, i;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        printf("Enter Product ID and Quantity: ");
        scanf("%d %d", &id[i], &qty[i]);
    }

    printf("\nInventory Details:\n");
    for(i=0;i<n;i++) {
        printf("Product ID: %d  Quantity: %d\n", id[i], qty[i]);
    }

    return 0;
}