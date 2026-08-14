#include <iostream>
using namespace std;

class rectangle{
    private:
    int l;
    int b;
    
    public:
    void details(int a,int v){
        l=a;
        b=v;
    }
    int area() {
       return l*b; 

    }
    int perimeter(){
        return 2*(l+b);
    }

};

int main(){
    int l,b;
    cin >>l>>b;
    rectangle R1;
    R1.details(l,b);
    int area=R1.area();
    cout <<"area of rect is :" <<area <<endl;
    int peri=R1.perimeter();
    cout <<"perimeter is "<<peri;

}