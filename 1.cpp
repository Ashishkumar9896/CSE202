#include <iostream>
using namespace std;
class Student{
    public:
    int rollno;
    string name;
    int regno;

    void display(){
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Registration No: " << regno << endl;
    }
};

int main(){
    Student s1;
    s1.rollno = 1;
    s1.name = " Ashish";
    s1.regno = 12523453;

    s1.display();

    return 0;
}