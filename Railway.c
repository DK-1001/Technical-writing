#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TRAINS 10
#define MAX_RESERVATIONS 100

int trainNumbers[MAX_TRAINS];
char trainNames[MAX_TRAINS][50];
int numTrains = 0;

int reservationNumbers[MAX_RESERVATIONS];
int reservationTrainNumbers[MAX_RESERVATIONS];
char reservationPassengerNames[MAX_RESERVATIONS][50];
int numReservations = 0;

int main() {
    while (1) {
        printf("Railway Reservation System\n");
        printf("1. Display available trains\n");
        printf("2. Make a reservation\n");
        printf("3. Exit\n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Available Trains:\n");
            for (int i = 0; i < numTrains; i++) {
                printf("%d. %s\n", trainNumbers[i], trainNames[i]);
            }
            printf("\n");
        } else if (choice == 2) {
            int trainNumber;
            printf("Enter train number: ");
            scanf("%d", &trainNumber);

            int validTrain = 0;
            for (int i = 0; i < numTrains; i++) {
                if (trainNumbers[i] == trainNumber) {
                    validTrain = 1;
                    break;
                }
            }
            int newReservationNumber = numReservations + 1;
            reservationNumbers[numReservations] = newReservationNumber;
            reservationTrainNumbers[numReservations] = trainNumber;
            printf("Enter passenger name: ");
            scanf("%s", reservationPassengerNames[numReservations]);

            numReservations++;

            printf("Reservation successful. Your reservation number is: %d\n", newReservationNumber);
        } else if (choice == 3) {
            printf("Exiting the program.\n");
            exit(0);
        }
        }
    
    return 0;
}
