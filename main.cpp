#include <iostream>
#include <gmpxx.h>  // Libreria GMP per numeri piu' grandi

using namespace std;

int main() {
    mpz_class fatt = 1;
    int num;
    while (true)
    {
        cout << "Inserisci un numero: ";
        cin >> num;
    
        if (num < 0) {
            cout << "Il fattoriale non è definito per numeri negativi." << endl;
        } else {
            for (int i = 1; i <= num; i++) {
                fatt *= i;
            }
            cout << "Il fattoriale di " << num << " è: " << fatt << endl;
        }
    }
    
    return 0;
}
