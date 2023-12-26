#include <iostream>
using namespace std;

void arrayByPointer(float* ptrArray, int size){
    for(int i=0; i<size; i++){
        cout<<"Memory Address : "<<&ptrArray[i]<<" with content : "<<ptrArray[i]<<endl;
    }
}

int main(){
    int size = 10;
    float arr[size] = {2,5,6,7,8,9,1,3,6,3};
    
    arrayByPointer(arr, size);
    
    return 0;
}
