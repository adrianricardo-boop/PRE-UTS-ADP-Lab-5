#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    system("cls");
    int x, kuadrat, digit, jumlah;

    cout << "Input : ";
    cin >> x;

    jumlah = 0;
    kuadrat = x * x;
    
    while (kuadrat > 0) {
        digit = kuadrat % 10;
        jumlah += digit;
        kuadrat /= 10;
    }
    if (jumlah == x) {
        cout << "OUTPUT : ANGKA NEON";
    } else {
        cout << "OUTPUT : BUKAN ANGKA NEON";
    }
}