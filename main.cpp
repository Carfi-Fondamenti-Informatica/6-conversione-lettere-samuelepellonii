
#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char a=0;
    cin >> a;

    Vero_o_Falso ( a );

    if ((a >= 65 and a <= 90) or (a >= 97 and a <= 122)) {
        cout << Trasformazione ( a ) << endl;

    } else {
        cout << "errore" << endl;
    }

    return 0;
}
