#include <iostream>
using namespace std;
int main(){
    int n=15;
   int lo=1,hi=n;
   int res=1;
   while(lo<=hi){
       int mid=(lo+hi)/2;
       if(mid*mid<=n){
           res=mid;
           lo=mid+1;
       }
       else{
           hi=mid-1;
       }
   }
   cout<<"Square root of "<<n<<" is: "<<res<<endl;
   return 0;
}