#include <stdio.h>

int main() {
    char books[5][50] = {"C Programming", "Java", "Python", "DBMS", "OS"};
    int i;

    printf("Available Books:\n");
    for(i=0; i<5; i++) {
        printf("%d. %s\n", i+1, books[i]);
    }

    return 0;
}