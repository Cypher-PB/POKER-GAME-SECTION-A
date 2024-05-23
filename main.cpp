#include <iostream>
#include "card.h"

using namespace std;

int main() {
    int cardnumber;
    string CT;

    cout << "Enter card number between 1-13: ";
    cin >> cardnumber;
    cout << "Enter card type (heart, spade, club, diamond): ";
    cin >> CT;

    if (cardnumber < 1 || cardnumber > 13 ||
        (CT != "heart" && CT != "spade" && CT != "club" && CT != "diamond")) {
        cout << "Invalid input!\n";
        return 1; // Indicate error
        }

    Card myCard(cardnumber, CT);
    myCard.display();

    return 0;
}
