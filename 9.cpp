#include <iostream>
using namespace std;

class Data {
    private:

    int i;
    float f;
    string str;
    public:
    void setData(int a,float b,string c){

        this -> i=a;
        this -> f=b;
        this -> str=c;
    
    }
    void displayData(){
        cout<<"The value of i is: "<<i<<endl;
        cout<<"The value of f is: "<<f<<endl;
        cout<<"The value of str is: "<<str<<endl;
    }
};

int main(){
    Data D;
    D.setData(20,3.14,"Hello");
    D.displayData();
}