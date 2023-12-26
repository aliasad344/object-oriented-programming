#include <iostream>
using namespace std;

int main (){
  int x = 0;
  int y = 0;
  int *ptrX = &x;
  int *ptrY = &y;
  
  cout << "Address of X : " << ptrX << endl;
  cout << "Value of X : " << x << endl;
  cout << "<---------------------------->" << endl;

  cout << "Address of ptrX : " << &ptrX << endl;
  cout << "Value of ptrX : " << ptrX << endl;
  cout << "Value of memory location of ptrX : " << *ptrX << endl;
  cout << "<---------------------------->" << endl;

  cout << "Address of Y : " << ptrY << endl;
  cout << "Value of Y : " << y << endl;
  cout << "<---------------------------->" << endl;

  cout << "Address of ptrY : " << &ptrY << endl;
  cout << "Value of ptrY : " << *ptrY << endl;
  cout << "Value of memory location of ptrY : " << ptrY << endl;
  cout << "<---------------------------->" << endl;

  return 0;
}
