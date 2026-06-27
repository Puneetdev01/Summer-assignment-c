#include <stdio.h>

int main() {
    char name[50];
    int m1, m2, m3;
    int total;
    float percentage;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\nMarksheet\n");
    printf("Name: %s\n", name);
    printf("Total = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}