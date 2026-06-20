#include <stdio.h>

int main() {
    int r, c, i, j, sum;

    scanf("%d %d", &r, &c);

    int a[r][c];

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(j=0;j<c;j++){
        sum = 0;
        for(i=0;i<r;i++)
            sum += a[i][j];

        printf("Sum of Column %d = %d\n", j+1, sum);
    }

    return 0;
}