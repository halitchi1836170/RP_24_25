#include <iostream>
#include <cmath>
#include <cstdio>
#include "functions.h"

using namespace std;

A::A(){
       cout << "Costruttore classe A" << endl;
    }

int A::methodA(int i){
    cout << "Metodo A, intero:  " << i << endl;
    return i;
    }

B::B(){
    cout << "Costruttore classe B" << endl;
    }

void B::methodB(A& a) {
    cout << "Metodo B, chiamo l'oggetto A in input:  " << a.methodA(10) << endl;
    }


int main(int argc, const char** argv) {
    cout << "hello world" << endl;

    A oggettoA = A();
    B oggettoB = B();
    oggettoB.methodB(oggettoA);

}