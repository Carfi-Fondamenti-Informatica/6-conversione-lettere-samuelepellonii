
#include "lib.h"

bool Vero_o_Falso ( char a ) {
    if ((a >= 65 and a <= 90) or (a >= 97 and a <= 122)) {
        return true;
    } else {
        return false;
    }
}

char Trasformazione ( char a ){
    if (a >= 65 and a <= 90) {
        return a+32;
    } else if (a >= 97 and a <= 122) {
        return a-32;
    }
}
