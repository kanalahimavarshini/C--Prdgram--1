#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

struct Room {
    int roomNumber;
    char customerName[50];
    int isBooked;
};

int main() {
    struct Room rooms[5];
    int choice, i, roomNo;

    // Initialize rooms
    for(i = 0; i < 5; i++) {
        rooms[i].roomNumber = i + 1;
        rooms[i].isBooked = 0;
        strcpy(rooms[i].customerName, "");
    }

    while(1) {
        printf("\n--- Room Booking Management System ---\n");
        printf("1. View Rooms\n");
        printf("2. Book Room\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nRoom Status:\n");
                for(i = 0; i < 5; i++) {
                    if(rooms[i].isBooked)
                        printf("Room %d - Booked by %s\n", rooms[i].roomNumber, rooms[i].customerName);
                    else
                        printf("Room %d - Available\n", rooms[i].roomNumber);
                }
                break;

            case 2:
                printf("Enter room number to book (1-5): ");
                scanf("%d", &roomNo);

                if(roomNo < 1 || roomNo > 5) {
                    printf("Invalid room number!\n");
                }
                else if(rooms[roomNo-1].isBooked) {
                    printf("Room already booked!\n");
                }
                else {
                    printf("Enter customer name: ");
                    scanf("%s", rooms[roomNo-1].customerName);
                    rooms[roomNo-1].isBooked = 1;
                    printf("Room booked successfully!\n");
                }
                break;

            case 3:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
#include <iostream>
using namespace std;

class Room {
public:
    int roomNumber;
    string customerName;
    bool isBooked;

    Room() {
        isBooked = false;
    }
};

int main() {
    Room rooms[5];
    int choice, roomNo;

    for(int i = 0; i < 5; i++) {
        rooms[i].roomNumber = i + 1;
    }

    while(true) {
        cout << "\n--- Room Booking Management System ---\n";
        cout << "1. View Rooms\n";
        cout << "2. Book Room\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                for(int i = 0; i < 5; i++) {
                    if(rooms[i].isBooked)
                        cout << "Room " << rooms[i].roomNumber 
                             << " - Booked by " << rooms[i].customerName << endl;
                    else
                        cout << "Room " << rooms[i].roomNumber 
                             << " - Available\n";
                }
                break;

            case 2:
                cout << "Enter room number (1-5): ";
                cin >> roomNo;

                if(roomNo < 1 || roomNo > 5)
                    cout << "Invalid room number!\n";
                else if(rooms[roomNo-1].isBooked)
                    cout << "Room already booked!\n";
                else {
                    cout << "Enter customer name: ";
                    cin >> rooms[roomNo-1].customerName;
                    rooms[roomNo-1].isBooked = true;
                    cout << "Room booked successfully!\n";
                }
                break;

            case 3:
                return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }
}
