#include <iostream>
using namespace std;
class Student{
    private:
   double marks;
   public:
   void setMarks(double m){
       if(m >= 0 && m <= 100){
           marks = m;
              cout << "Marks set to: " << marks << endl;
       } else {
           cout << "Invalid marks. Please enter a value between 0 and 100." << endl;
       }
   }
};
int main(){
    Student s1;
    s1.setMarks(85.5);
    s1.setMarks(105); // This will trigger the invalid marks message

    return 0;
}