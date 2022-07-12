#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "masukna panjang pola: ";
    cin >> n;


    // // POLA KE-1
    // for (int a = 1; a <= n; a++) {
    //     for (int b = 1; b <= a; b++) {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // POLA KE-2
    // for (int a = 1; a <= n; a++) {
    //     for (int b = n; b >= a; b--) {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // POLA KE-3
    // for (int a = 1; a <= n; a++) {
    //     for (int b = 1; b < a; b++) {
    //         cout << " ";
    //     }
    //     for (int c = n; c >= a; c--) {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // POLA KE-4
    // for (int a = 1; a <= n; a++) {
    //     for (int b = n; b > a; b--) {
    //         cout << " ";
    //     }
    //     for (int c = 1; c <= a; c++) {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // POLA KE-5
    // for (int a = 1; a <= n; a++) {
    //     for (int b = n; b > a; b--) {
    //         cout << " ";
    //     }
    //     for (int c = 1; c <= a; c++) {
    //         cout << "*";
    //     }

    //     for (int d = 1; d < a; d++) {
    //         cout << "*";
    //     }


    //     cout << endl;
    // }

    // POLA KE-6
    // for (int a = 1; a <= n; a++) {
        
    //     for (int b = 1; b < a; b++) {
    //         cout << " ";
    //     }
    //     for (int c = n; c > a; c--) {
    //         cout << "*";
    //     }

    //     for (int d = n; d >= a; d--) {
    //         cout << "*";
    //     }


    //     cout << endl;
    // }

    // POLA KE-7
    for (int a = 1; a <= n; a++) {
        for (int b = n; b > a; b--) {
            cout << " ";
        }
        for (int c = 1; c <= a; c++) {
            cout << "*";
        }

        for (int d = 1; d < a; d++) {
            cout << "*";
        }


        cout << endl;
    }

    for (int a = 2; a <= n; a++) {
        
        for (int b = 1; b < a; b++) {
            cout << " ";
        }
        for (int c = n; c > a; c--) {
            cout << "*";
        }

        for (int d = n; d >= a; d--) {
            cout << "*";
        }


        cout << endl;
    }

}
