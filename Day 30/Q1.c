#include <stdio.h>

int main() {
    int n, marks[50], i;
    char names[50][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("Enter name and marks: ");
        scanf("%s %d", names[i], &marks[i]);
    }

    printf("\nStudent Records:\n");
    for(i=0; i<n; i++) {
        printf("%s - %d\n", names[i], marks[i]);
    }

    return 0;
}