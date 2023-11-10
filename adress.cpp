#include <iostream>
using namespace std;

int main( int argc, char *argv[] ) {
  double num = 2.4;
  double* pointerToNum = & num;
  
  cout << "Variable value: " << num << "; address: " << &num << endl;
  cout << "Pointer value: " << pointerToNum << "; adress: " << &pointerToNum << "; dereference " << *pointerToNum << endl;
  
  
}
