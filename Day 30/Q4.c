#include <stdio.h>

void display(char name[], int marks) {
    printf("Name: %s, Marks: %d\n", name, marks);
}

int main() {
    char name[50];
    int marks;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter marks: ");
    scanf("%d", &marks);

    display(name, marks);

    return 0;
}