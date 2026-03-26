//
// Created by ligam on 3/26/2026.
//

#include <iostream>
using namespace std;

int main() {
    int skaits;
    double cena, summa = 0.0;

    cout << "Ievadiet precu skaitu";
    cin >> skaits;

    int i = 0;
    while (i < skaits) {
        cout << "Ievadiet " << (i + 1) << ". Preces cenu: ";
        cin >> cena;
        summa += cena;
        i ++;
    }

    cout << "Kopeja summa: " << summa << " eiro" << endl;

    if (summa > 500) {
        double atlaide = summa * 0.10;
        double gala_summa = summa - atlaide;
        cout << "10% atlaide: -" << atlaide << " eiro" << endl;
        cout << "Kopeja summa: " << gala_summa << " eiro" << endl;
    } else {
        cout << "Kopeja summa: " << summa << " eiro" << endl;
    }

    return 0;
}