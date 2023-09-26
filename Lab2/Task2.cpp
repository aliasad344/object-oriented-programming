#include<iostream>
using namespace std;


class Task2{
    public:
    Task2(){
        
    }
    
    void getData(int arr[], int size){
        for(int i=0; i<size; i++){
            cout<<"Enter "<<i+1<<"th element : ";
            cin>>arr[i];
        }
    }
    
    void displaydata(int arr[], int size){
        cout<<"You have entered the following array : ";
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    int coutEvens(int arr[], int size){
        int count = 0;
        for(int i=0; i<size; i++){
            if(arr[i]%2 == 0){
                count++;
            }
        }
        return count;
    }
    
    float mean(int arr[], int size){
        float result = 0.0;
        float sum = 0;
        for(int i=0; i<size; i++){
            sum += arr[i];
        }
        
        result = sum/size;
        return result;
    }
};

int main(){
    int size;
    Task2 obj;
    
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    
    obj.getData(arr, size);
    
    obj.displaydata(arr, size);
    
    int count = obj.coutEvens(arr, size);
    cout<<"Number of Evens in the array : "<<count<<endl;

    float number = obj.mean(arr, size);
    cout<<"Mean of the array is : "<<number<<endl;
    
    return 0;
}