#include <iostream>
using namespace std;

class Bank{
    private:
    int accno;
    string name;
    float balance;
    public:
    void setData(int a,string b,float c){
        accno=a;
        name=b;
        balance=c;
    }
    void deposit(float amount){
        balance+=amount;
        cout<<"Amount deposited: "<<amount<<endl;

    }
    void withdraw(float amount){
            balance-=amount;
            cout<<"Amount withdrawn: "<<amount<<endl;
        
    }
    void display(){
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
    
    Bank B;
    B.setData(12345,"John Doe",1000.0);
    B.deposit(500.0);
    B.withdraw(200.0);
    B.display();
}