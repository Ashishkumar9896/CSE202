#include <iostream>
using namespace std;
int main(){
    int n=15;
    //to find square root of n if n is not perfect square then return floor value of square root
    int ans=0;
   int a=1;
    while(a*a<=n){
          a++;
     }
    cout<<"Square root of "<<n<<" is: "<<a-1<<endl;
    return 0;
}