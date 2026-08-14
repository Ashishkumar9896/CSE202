#include <iostream>
using namespace std;
//enum-enumeration-is a user defined

int main(){
    enum color {red,green,blue};
    enum Days {Mon,Tue,Wed,Thu,Fri,Sat,Sun};
    color c = green;
    Days d = Mon;
    cout << "Color: " << c << endl;
    cout << "Day: " << d << endl;
    int color[3]={0,1,2};
    if (c == color[1]) {
        cout << "The color is green." << endl;
    } else {
        cout << "The color is not green." << endl;
    }   

}