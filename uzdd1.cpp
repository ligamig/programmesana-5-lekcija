//
// Created by s25migoliga on 3/12/2026.
//
#include <iostream>
using namespace std;
int main () {
    char simbols{};

    cout << "Ievadi simbolu: ";
    cin >> simbols;

    if ( simbols >= 65 && simbols <=90 ) {
        cout << "Lielais burts.";
    }
    else if (simbols >= 97 && simbols <= 122 ) {
        cout << "Mazais burts.";
    }
    else if (simbols >= 48 && simbols <= 57 ) {
        cout << "Cipars";
    }
    else {
        cout << "Cits simbols";
    }


    return 0;
}