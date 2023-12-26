#include<iostream>
using namespace std;

void getMinMax(int* ptrArray, int size, int* ptrMin, int* ptrMax){
    
    for(int i=0; i<size; i++){
        if(ptrArray[i] > *ptrMax){
            *ptrMax = ptrArray[i];
        }else if(ptrArray[i] < *ptrMin){
            *ptrMin = ptrArray[i];
        }
    }
}

int main(){
    int size = 10;
    int arr[size] = {2,5,7,8,0,10,3,4,6,-3};
    int min = arr[0], max=arr[0];
    
    getMinMax(arr, size, &min, &max);
    cout<<"Min number in array : "<<min<<endl;
    cout<<"Max number in array : "<<max<<endl;
    
    return 0;
}