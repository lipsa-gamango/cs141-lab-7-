/*write a c++ program to find power of any natural number using recursion.*/
#include<iostream>
using namespace std;
int pow(int x,int y);
int main(){
    int n,n1,p;
    cout<<"enter the number-";
    cin>>n;
    cout<<"enter the power-";
    cin>>n1;
  
   p=pow(n,n1);
   cout<<n<<"par power"<<n1<<" = "<<p<< endl;
 }
 int pow(int num,int p1)
 { 
    if(p1==0)
      return 1;
    else
      return num*pow(num,p1-1);
  }

