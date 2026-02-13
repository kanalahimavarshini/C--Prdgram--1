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
#include <iostream>
#include <cstring>
using namespace std;

// C-style structure
struct CRoom {
    int roomNumber;
    char customerName[50];
    int isBooked;
};

// C++ Class (Java-like OOP)
class RoomBookingSystem {
private:
    CRoom rooms[5];

public:
    RoomBookingSystem() {
        for(int i = 0; i < 5; i++) {
            rooms[i].roomNumber = i + 1;
            rooms[i].isBooked = 0;
            strcpy(rooms[i].customerName, "");
        }
    }

    void viewRooms() {
        cout << "\nRoom Status:\n";
        for(int i = 0; i < 5; i++) {
            if(rooms[i].isBooked)
                cout << "Room " << rooms[i].roomNumber 
                     << " - Booked by " << rooms[i].customerName << endl;
            else
                cout << "Room " << rooms[i].roomNumber 
                     << " - Available\n";
        }
    }

    void bookRoom() {
        int roomNo;
        cout << "Enter room number (1-5): ";
        cin >> roomNo;

        if(roomNo < 1 || roomNo > 5) {
            cout << "Invalid room number!\n";
            return;
        }

        if(rooms[roomNo-1].isBooked) {
            cout << "Room already booked!\n";
        } else {
            cout << "Enter customer name: ";
            cin >> rooms[roomNo-1].customerName;
            rooms[roomNo-1].isBooked = 1;
            cout << "Room booked successfully!\n";
        }
    }
};

// Main function (C style)
int main() {
    RoomBookingSystem system;
    int choice;

    while(true) {
        cout << "\n--- Room Booking Management System ---\n";
        cout << "1. View Rooms\n";
        cout << "2. Book Room\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: system.viewRooms(); break;
            case 2: system.bookRoom(); break;
            case 3: return 0;
            default: cout << "Invalid choice!\n";
        }
    }
}
<!DOCTYPE html>
<html>
<head>
    <title>Room Booking System</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>

<div class="container">
    <h2>Room Booking Management System</h2>

    <form action="BookingServlet" method="post">
        <label>Customer Name:</label>
        <input type="text" name="name" required>

        <label>Room Number (1-5):</label>
        <input type="number" name="room" min="1" max="5" required>

        <button type="submit">Book Room</button>
    </form>
</div>

</body>
</html>
