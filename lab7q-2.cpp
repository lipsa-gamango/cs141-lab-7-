#include <iostream>
using namespace std;
int num(int i,int n){
    if (i==(n+1)){
    return 9;}
    else {
    cout<<i<<endl;
    i++;
 //recursing function
   num(i,n);
  }
    return 0;
}
   int main(){
   int i,n;
   cout<<"the last number is";
   cin>>n;
   cout<<endl;
  
   num(1,n);
   return 0;
}
