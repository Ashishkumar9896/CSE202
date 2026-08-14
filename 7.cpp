#include <iostream>
using namespace std;
//write a program to print the name of the day of week based on interger where 0 is monday and 6 is sunday using enum and switch case

enum Days {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
void printDayofweek(int a){
switch(a){
    case Monday:
        cout << "Monday";
        break;
    case Tuesday:
        cout << "Tuesday";
        break;
    case Wednesday:
        cout << "Wednesday";
        break;
    case Thursday:
        cout << "Thursday";
        break;
    case Friday:
        cout << "Friday";
        break;
    case Saturday:
        cout << "Saturday";
        break;
    case Sunday:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid input";
}
}
int main(){
    int a;
    cout <<"enter the number of days of week to print the name of the day :";
    cin>>a;
    printDayofweek(a);
}