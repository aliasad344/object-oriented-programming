#include<iostream>
using namespace std;

class Hospital{
    public:
    Hospital(){
    }
    
    int charges(int data1, int data2, int data3, int data4){
        int sum = data1*data2;
        return sum+data3+data4;
    }
    
    int charges(int data1, int data2){
        return data1+data2;
    }
};

int main(){
    int type,days,dailycharges, medicationcharges, servicecharges, bill;
    cout<<"Type 1 for in-patient and 2 for out-patient"<<endl;
    cin>>type;
    
    Hospital obj;
    
    if(type == 1){
        cout<<"Enter the number of days spent in Hospital : ";
        cin>>days;
        cout<<"Enter the daily charges : ";
        cin>>dailycharges;
        cout<<"Enter Medication Charges : ";
        cin>>medicationcharges;
        cout<<"Enter Service Charges : ";
        cin>>servicecharges;
        
        bill = obj.charges(days, dailycharges, medicationcharges, servicecharges);
        cout<<"Your bill is : "<<bill<<endl;
    }else if(type == 2){
        cout<<"Enter Medication Charges : ";
        cin>>medicationcharges;
        cout<<"Enter Service Charges : ";
        cin>>servicecharges;
        
        bill = obj.charges(medicationcharges, servicecharges);
        cout<<"Your bill is : "<<bill<<endl;
    }else{
        cout<<"You enter wrong number"<<endl;
        return 0;
    }
    return 0;   
}