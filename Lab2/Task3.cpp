#include<iostream>
using namespace std;

class Task4{
    public:
    Task4(){}
    
    void Transpose(int matrix[][4]){
        cout<<"Matrix Before Trasnpose"<<endl;
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                cout<<matrix[i][j]<<"  ";
            }
            cout<<endl;
        }
        
        cout<<"Matrix After Trasnpose"<<endl;
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                cout<<matrix[j][i]<<"  ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int matrix[4][4];
    Task4 obj;
    cout<<"We are going to create 4X4 matrix"<<endl;
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<"Enter data for matrix["<<i<<"]["<<j<<"] location : ";
            cin>>matrix[i][j];
        }
        
    }
    
    obj.Transpose(matrix);
    return 0;
}