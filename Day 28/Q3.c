#include <stdio.h>

int main() {
    int seats, booked;

    printf("Enter Total Seats: ");
    scanf("%d", &seats);

    printf("Enter Seats to Book: ");
    scanf("%d", &booked);

    if(booked <= seats) {
        seats -= booked;
        printf("Booking Successful!\n");
        printf("Remaining Seats = %d\n", seats);
    } else {
        printf("Not enough seats available.\n");
    }

    return 0;
}