//
// Created by ligam on 3/26/2026.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string atzime;
    bool pareizi = false;

    while (!pareizi) {
        cout << "Ievadi atzimi: ";
        cin >> atzime;

        char burts = atzime[0];
        if (burts != 'A' && burts != 'B' && burts != 'C' && burts != 'D' && burts != 'F') {
            cout << "Nepareiza atzime, atlauti burti ir A, B, C, D, F!" << endl;
            continue;
        }

        if (atzime.length() == 1) {
            pareizi = true;
        } else if (atzime.length() == 2) {
            char papildus = atzime[1];
            if (burts == 'F') {
                cout << "F nevar but ar + vai -" << endl;
            } else if (papildus != '+' && papildus != '-') {
                cout << "Papildus var but tikai + vai -" << endl;
            } else {
                pareizi = true;
            }
        } else {
            cout << "Parak gara virkne" << endl;
        }
    }

    double vertiba;
    char burts = atzime[0];

    if      (burts == 'A') vertiba = 4.0;
    else if (burts == 'B') vertiba = 3.0;
    else if (burts == 'C') vertiba = 2.0;
    else if (burts == 'D') vertiba = 1.0;
    else                   vertiba = 0.0;

    if (atzime.length() == 2) {
        char papildus = atzime[1];
        if (papildus == '+' && burts != 'A') {
            vertiba += 0.3;
        } else if (papildus == '-') {
            vertiba -= 0.3;
        }
    }

    if (vertiba == (int)vertiba) {
        cout << "Skaitliska atzime ir: " << (int)vertiba << endl;
    } else {
        cout << "Skaitliska atzime ir: " << vertiba << endl;
    }

    return 0;
}