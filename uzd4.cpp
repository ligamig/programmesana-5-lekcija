//
// Created by s25migoliga on 3/12/2026.
//
#include <iostream>
using namespace std;
int main () {
    int n;
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Ievadi skaitli: ";
    cin >> n;

    for (int counter = 1; counter <= n; counter++) {
        a = a + counter;
        b = b + counter * counter;
        c = c + counter * counter * counter;
    }
    int formula1 = (n * (n+1))/2;
    int formula2 = n * (n-1)*((2 * n) + 1)/6;
    int formula3 = ((n*n)*((n+1)*(n+1)))/4;

    cout << "1) " << formula1 << endl;
    cout << "2) " << formula2 << endl;
    cout << "3) " << formula3 << endl;

    return 0;
}