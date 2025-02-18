#include <iostream>
#include "mat_f.h"
using namespace std;

int main() {
  VecF v1(3);
  v1.at(0)=1;
  v1.at(1)=2;
  v1.at(2)=3;
  cout << "vettore v1: " << v1 << endl;

  MatF m(3,3);
  m.fill(0.);
  cout << "matrice m: " << m;
  MatF m2(3,3);
  m2.fill(0);
  m2.at(0,0)=1;
  m2.at(1,1)=2;
  m2.at(2,2)=3;

  cout << "matrice m2: " << m2 << endl;
  cout << m + m2 << endl;
  MatF m3=m + m2;
 
  cout <<"somma m3=m+m2: "<< m + m2 << endl;

  cout <<"differenza m3-m2: " << m3-m2 << endl;
  cout << "prodtto m*v1: " << m * v1 << endl;
  cout << "prodotto m3*v1" << m3 * v1 << endl;

  MatF m4(3,4);
  cerr << "m4 " << m4.dimension << endl;
  m4.fill(1);
  cout << m4 << endl;
  
  cout << (m3*m4).transpose() << endl;

  MatF m5(3,4);
  m5.randFill();
  cout << m5 << endl;
  
  cout << m5*m5.transpose() << endl;

  m.randFill();
  cout << m << endl;

  cout << m-m5*m5.transpose() << endl;
  cout << "DONE" << endl;
}
