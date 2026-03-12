//
// Created by s25migoliga on 3/12/2026.
//
#include <iostream>
using namespace std;
int main() {
    char atbilde;
    cout << "Ievades atbilde (T vai F) ==>";
    cin >> atbilde;

    while (atbilde != 'T' && atbilde != 'F') {
        cout << "Atbilde neder.";
        cout << "Ludzu ievadi T vai F == >" << endl;
        cin >> atbilde;
    }
    cout << "Tu ievadiji: " << atbilde << endl;
    cout << "Lai jums laba diena!" << endl;

    return 0;
}