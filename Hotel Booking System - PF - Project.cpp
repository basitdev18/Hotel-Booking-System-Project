#include <iostream>
using namespace std;
int main() 
{
    // Variables
    string customer;
    int days, roomChoice, amenityChoice;
    char moreAmenity;
    float roomPrice = 0, amenityTotal = 0, grandTotal = 0, tax;

    // Welcome Message
    cout << "==== WELLCOME TO ATLANTIS THE ROYAL HOTEL ====" << endl;
    
    // Input Customer Details
    cout << "Enter customer name: ";
    cin >> customer;

    // Room Selection
    cout << "==== ROOM TYPES ====" << endl;
    cout << "1. Standred Room - 5000 per day" << endl;
    cout << "2. Deluxe Room - 10000 per day" << endl;
    cout << "3. Suite Room - 15000 per day" << endl;
    cout << "4. King Suite Room - 25000 per day" << endl;
    cout << "5. Presidential Suite - 50000 per day" << endl;
    cout << "Select room type (1-5): ";
    cin >> roomChoice;

    // Input number of days
    cout << "Enter number of days to stay: ";
    cin >> days;

    // Calculate Room Price
    switch(roomChoice)   
    {
        case 1:
        roomPrice = 5000 * days;
        break;

        case 2:
        roomPrice = 10000 * days;
        break;

        case 3:
        roomPrice = 15000 * days;
        break;

        case 4:
        roomPrice = 25000 * days;
        break;

        case 5:
        roomPrice = 50000 * days;
        break;
    }
    do // Amenity Selection
    {
        cout << "==== AMENITIES ====" << endl;
        cout << "1. Breakfast - 500 per day" << endl;
        cout << "2. Swimming Pool Access - 800 per day" << endl;
        cout << "3. Gym Access - 1000 per day" << endl;
        cout << "4. Spa Access - 1500 per day" << endl;
        cout << "5. Airport Pickup - 5000 (one-time)" << endl;
        cout << "Select amenity (1-5): ";
        cin >> amenityChoice;

        switch(amenityChoice)  // Calculate Amenity Price
        {
            case 1:
            amenityTotal += 500 * days;
            break;

            case 2:
            amenityTotal += 800 * days;
            break;

            case 3:
            amenityTotal += 1000 * days;
            break;

            case 4:
            amenityTotal += 1500 * days;
            break;

            case 5:
            amenityTotal += 5000;
            break;
        }
        cout << "Do you want to add more amenities? (y/n): ";   // Ask for more amenities
        cin >> moreAmenity;
    }
    while(moreAmenity == 'y' || moreAmenity == 'Y');    // Loop until user says no

    tax = 0.12 * (roomPrice + amenityTotal);      // Calculate Tax
    grandTotal = roomPrice + amenityTotal + tax;     // Calculate Grand Total

    // Display Billing Details
    cout << "\n==== BILLING DETAILS ====" << endl;
    cout << "Customer Name: " << customer << endl;
    cout << "Room Charges: " << roomPrice << endl;
    cout << "Amenity Charges: " << amenityTotal << endl;
    cout << "Tax (12%): " << tax << endl;
    cout << "Grand Total: " << grandTotal << endl;

    return 0;
}
    
