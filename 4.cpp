#include <iostream>
using namespace std;

//To create a class name book and sruct for book with attribute,name,author,price and methods displayBook details

class Book {
    private:
        string name;
        string author;
        float price;

    public:
        void setDetails(string n, string a, float p) {
            name = n;
            author = a;
            price = p;
        }

        void displayBook() {
            cout << "Book Name: " << name << endl;
            cout << "Author: " << author << endl;
            cout << "Price: $" << price << endl;
        }
};

struct BookStruct {
    string name;
    string author;
    float price;

    void displayBook() {
        cout << "Book Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    // Using class
    Book book1;
    book1.setDetails("The Great LPU", "Ashok Mittal", 10.99);
    book1.displayBook();

    cout << endl;

    // Using struct
    BookStruct book2;
    book2.name = "KOI MIL GYA";
    book2.author = "JAADU Mehra";
    book2.price = 8.99;
    book2.displayBook();

    return 0;
}