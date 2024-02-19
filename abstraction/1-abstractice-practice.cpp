#include <iostream>
using namespace std;

class myBank{
    private:
        int currentMoney;
        int depositMoney;
    public:
    myBank(){
        currentMoney = 100;
        depositMoney = 0;
    }

    void depositMoneyFunc(){
        cout<<"Enter how much money you want Deposit to your account : ";
        cin>>depositMoney;
        currentMoney+=depositMoney;
    }

    int currentMoneyCheck(){
        return currentMoney;
    }

    int depositMoneyCheck(){
        return depositMoney;
    }

};

int main(void){
    myBank custumer;
    cout<<"Deposit money to your account : ";
    custumer.depositMoneyFunc();

    system("cls");
    
    cout<<"Your total Money : "<<custumer.currentMoneyCheck()<<endl;
    cout<<"Your deposit amount : "<<custumer.depositMoneyCheck()<<endl;
}