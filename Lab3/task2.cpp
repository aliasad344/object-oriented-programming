#include<iostream>
using namespace std;

void subtractByPointer(double *ptrA, double *ptrB, double *ptrR){
    *ptrR = *ptrA - *ptrB;
}

int main(){
    double num1,num2,result;
    
    cout<<"Enter value of first pointer : ";
    cin>>num1;
    cout<<"Enter value of secod pointer : ";
    cin>>num2;
    
    subtractByPointer(&num1, &num2, &result);
    cout<<"Difference is : "<<result;
}