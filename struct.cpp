#include <iostream>
using namespace std;
/*Difference between class and struct in C++ --
- In a struct, members are public by default, while in a class, members are private by default.
*/
struct Student {
    int id;
    string name;
    float gpa;
    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student s1;
    s1.id = 101;
    s1.name = "John Doe";
    s1.gpa = 3.75;

    s1.display();

    return 0;
}