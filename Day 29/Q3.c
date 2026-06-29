#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter string: ");
    scanf("%s", str);

    do {
        printf("\n1.Length 2.Reverse 3.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2:
                strrev(str);
                printf("Reversed = %s\n", str);
                break;

            case 3:
                printf("Exit\n");
                break;

            default:
                printf("Invalid Choice\n");
        }
    } while(choice != 3);

    return 0;
}