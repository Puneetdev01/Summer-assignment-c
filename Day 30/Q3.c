#include <stdio.h>

int main() {
    int id[50], salary[50], n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("Enter Employee ID and Salary: ");
        scanf("%d %d", &id[i], &salary[i]);
    }

    printf("\nEmployee Records:\n");
    for(i=0; i<n; i++) {
        printf("ID: %d Salary: %d\n", id[i], salary[i]);
    }

    return 0;
}