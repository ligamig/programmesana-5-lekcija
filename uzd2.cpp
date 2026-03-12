//
// Created by s25migoliga on 3/12/2026.
//
#include <iostream>
using namespace std;
int main() {
    string lv{"admin"};
    string parole{"parole123"};
    string user{};
    string psw{};
    int counter{0};
    bool atbilde;

    cout << "Ievadi lietotaja vardu: ";
    cin >> user;
    cout << "Ievadi paroli: ";
    cin >> psw;

    while ((user != lv && psw != parole) && counter < 3) {
        cout << "lietotaja vards vai parole neder";
        cout << "Ludzu ievadiet velreiz: " << endl;
        cout << "lietotaja vards: ";
        cin >> user;
        cout << "parole: ";
        cin >> psw;
        counter++;

        if (counter == 3) {
            cout << "Tu tiec blokets!" << endl;
            break;
        }
        if (user == lv && psw == parole) {
            cout << "Lietotajvards un parole pareiza!" << endl;
        }

        if (counter == 2) {
            cout << "vai tu veles turpinat? (T/F)";
            cin >> atbilde;
            if (atbilde == 'T') {
                continue;
            }
            else if (atbilde == 'F') {
                break;
            }
        }
    }

    return 0;
}