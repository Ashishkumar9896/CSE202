//Private class
#include <iostream>
using namespace std;

class Student{
    private:
    int rollno;
    string name;
    int regno;
    public:
    void display(){
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Registration No: " << regno << endl;
    }
    public:
    void setData(int r, string n, int reg){
        rollno = r;
        name = n;
        regno = reg;
    }
};

int main(){
    Student s1;
    s1.setData(1, "Ashish", 12523453);
    

    return 0;
}
