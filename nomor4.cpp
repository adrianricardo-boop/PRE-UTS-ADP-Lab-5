#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");
    int jumlah; 
    char alphabet[] = 
    {'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
    'O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cout << "INPUT  : "; cin >> jumlah;

    cout << "OUTPUT : "; 
    if (jumlah <= 0) cout << "angka tidak valid";
    if (jumlah > 0) {
        for (int j = 0; j < jumlah; j++) {
            for (int i = 0; i <= j; i++) {
                cout << alphabet[j];
            }
            cout << endl;
            cout << "         ";
        }
    }
    return 0;
}