//union 
#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main(){
    Data D;
    D.i=20;
    cout<<"The value of i is: "<<D.i<<endl;
    D.c='A';
    cout<<"The value of c is: "<<D.c<<endl;
    D.f=3.14;
    D.i=2;
    cout<<"The value of f is: "<<D.f<<endl;
    cout<<"It will print garbage value because union can store only one value at a time and the last value stored is float so it will print garbage value for int"
    ;
}