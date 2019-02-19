#include<iostream>
using namespace std;
class calculator
{
private:
     int a,b;
public:
int add(int a,int b)
{
cout<<"a+b :"<<a+b;
}
int divide(int a,int b)
{
cout<<"a/b :"<<a/b;
}
int substract(int a,int b)
{
cout<<"a-b :"<<a-b;
}
int multiply(int a,int b)
{
cout<<"a*b :"<<a*b;
}
}A;
int main()
{
int a,b,x,y=1;
cout<<"Enter the two numbers :"<<endl;
cout<<"a :";
cin>>a;
cout<<"b :";
cin>>b;
cout<<"Press 1 to add"<<endl;
cout<<"Press 2 to divide"<<endl;
cout<<"Press 3 to substract"<<endl;
cout<<"Press 4 to multiply"<<endl;
cout<<"Press 5 to exit"<<endl;
cin>>x;
while(y==1)
{
switch(x){
    case 1:
A.add(a,b);
break;
    case 2:
A.divide(a,b);
break;
    case 3:
A.substract(a,b);
break;
    case 4:
A.multiply(a,b);
break;
    case 5:
y=0;
break;
    default :
cout<<"Wrong Choice!";
break;
}
}
}

