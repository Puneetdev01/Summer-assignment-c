#include<stdio.h>
int main(){

    int n,digit,Reverse=0;
    printf("Enter a number");
    scanf("%d",&n);

    while(n!=0){
        digit =n%10;
        Reverse=Reverse*10+digit;
        n=n/10;
    }
    printf("Reverse Number=%d",Reverse);
    return 0;
}