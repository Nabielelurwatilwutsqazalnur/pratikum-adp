#include <iostream>

using namespace std;

int main() {
    cout << "Program Bilangan Fibonacci\nNabiel El Urwatilwutsqa Zalnur \nNIM : 2310432025 \nShift 2 \n\n";

    while (true) {
        int n;
        cout << "Masukkan jumlah bilangan Fibonacci yang ingin dihitung (3-199): ";
        cin >> n;

        if ((n>=3 && n<=100) || (n>=109 && n<=199)) {
            int fib0 = 1, fib1 = 1;        
            int sum = fib0 + fib1;
            for (int i = 2; i < n; ++i) {
                int fibnext = fib0 + fib1;
                sum += fibnext ;
                fib0 = fib1;
                fib1 = fibnext;
            }
            cout << "\nbilangan fibonaci ke "<< n << " adalah " << fib1; 
            cout << "\nJumlah deret Fibonacci hingga " << n << " adalah " << sum << endl;
            break;
        } else {
            cout << "\nMasukkan angka sesuai interval yang valid." << endl;
        }
    }

    return 0;
}