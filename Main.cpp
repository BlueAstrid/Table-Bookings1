#include <iostream>
#include <string>
#include <vector>
#include "Restaurant .h"
using namespace std;

void PopulateVector (vector<Restaurant>& newReservations){
    cout << "How many reservations do you have?" << endl;
    int Reserv_Size;
    cin >> Reserv_Size;

    string name;
    int tablenum;
    for (int i = 0; i < Reserv_Size; i++) {
        cout << "Enter Guest name" << endl;
        cin >> name;
        cout << "Assign a table number" << endl;
        cin >> tablenum;

        Restaurant newGuest(name, tablenum);
        newReservations.push_back(newGuest);
        cout << endl;
    }
    cout << endl;
}
//Function to display the vector of objects
void DisplayVector (const vector<Restaurant>& newReservations) {
    unsigned int size = newReservations.size ();
    for (unsigned int i = 0; i < size; i++){
        cout << "Guest Name: " << newReservations[i].getGuestname() << endl;
        cout << "Table Number: " << newReservations[i].getTableNum() << endl;
        cout << endl;
    }
}
int main(){

vector <Restaurant> Reservations;
PopulateVector (Reservations);
DisplayVector (Reservations);
return 0;
}
