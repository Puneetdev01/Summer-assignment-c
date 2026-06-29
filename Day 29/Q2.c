#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    do {
        printf("\n1.Display 2.Sum 3.Exit\n");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                for(i=0;i<n;i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i=0;i<n;i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
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