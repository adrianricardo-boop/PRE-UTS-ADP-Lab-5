#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    int x [5];
    cout << "Input  : ";

    for (int i = 1; i <= 5; i++) {
        cin >> x[i];
    }
    cout << "Output : ";
    for (int i = 5; i >= 1; i--) cout << x[i] << ' ';
}