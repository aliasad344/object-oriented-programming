#include <iostream>
using namespace std;

//Task1
void calculateAnnualPay(){
    float payAmount = 1700.00;
    int payPeriod = 26;
    float annualPay = payAmount*payPeriod;
    cout<<"Totla Annual Pay is : "<<annualPay<<endl;
}


//Task2
void costToPurchase(){
    float price = 99;
    float units,cost,discout;
    cout<<"How many unit you want to buy"<<endl;   
    cin>>units;

    if(units<=0){
        cout<<"Units can't be 0 or negative"<<endl;
        return;
    }else if(units < 10){
        cost = units*price;
    }else if(units >= 10 && units < 20){
        price = price - (price*0.20);
        cost = units*price;
    }else if(units >= 20 && units < 50){
        price = price - (price * 0.30);
        cost = units*price;
    }else if(units >= 50 && units < 100){
        price = price - (price * 0.40);
        cost = units*price;
    }else if(units >= 100){
        price = price- (price*0.50);
        cost = units*price;
    }

    cout<<"Total cost for the "<<units<<" units : "<<cost<<endl;
}

//Task3
void oceanRise(){
    float risingRate = 1.5;
    int years;

    cout<<"Enter the year to find the rising rate of ocean in future : ";
    cin>>years;

    cout<<"Year"<<"      "<<"Level"<<endl;
    for(int i=0; i<years; i++){
        cout<<i+1<<"         "<<risingRate*(i+1)<<endl;
    }
}

//Task4
void findSum(){
    int sLimit, eLimit;
    int sum = 0;
    cout<<"Enter starting limit : ";
    cin>>sLimit;
    cout<<"Enter ending limit : ";
    cin>>eLimit;    

    while(sLimit <= eLimit){
        if(sLimit%2 == 0 && sLimit%3==0 && sLimit%5 == 0){
            sum+=sLimit;
        }
        sLimit++;
    }

    cout<<"The sum is : "<<sum<<endl;
}
int main(){
    //Run the task which you want
    
    //calculateAnnualPay();
    //costToPurchase();
    //oceanRise();
    //findSum();
    return 0;
}