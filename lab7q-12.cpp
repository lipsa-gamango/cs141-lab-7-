#include<iostream>
using namespace std;
int temp=1;
int lcm(int x,int y)
 {
  
  if(temp%x==0 && temp%y==0)
   {
    return temp;
   }
   else
   {
    temp++;
    lcm(x,y);
   }
  return temp;
 }
int main()
{
 int num1,num2,res;
 cout<<"Enter first number:- ";
 cin>>num1;
 cout<<"Enter second number:- ";
 cin>>num2;

res=lcm(num1,num2);
cout<<"Lcm of two numbers is:- "<<res;
return 0;
}









