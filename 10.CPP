#include <iostream>
//to create a employee class with id -incremental ,name,age ,dept,email constructor will initalize value using initializer list

using namespace std;

class Employee {
    public:
    static int id;
    string name;
    int age;
    string dept;
    string email;

    Employee(string n, int a, string d, string e) : name(n), age(a), dept(d), email(e) {
        id = ++id_c; // Increment the static id for each new employee
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << dept << endl;
        cout << "Email: " << email << endl;
    }

    
    int Employee::id_c = 0; // Initialize static member
};
int main() {
    Employee emp1("Alice", 30, "HR", "alice@company.com");
    Employee emp2("Bob", 25, "IT", "bob@company.com");
    Employee emp3("Charlie", 35, "Finance", "charlie@company.com");

    emp1.display();
    cout << endl;
    emp2.display();
    cout << endl;
    emp3.display();

    return 0;
}