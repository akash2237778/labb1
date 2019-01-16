#include<iostream>
using namespace std;
class calculator
{
int add(int,int);
int divide(int,int);
int substract(int,int);
int multiply(int,int);
public:
int op1,op2;
}A;
void main()
{
cout<<"enter the to numbers";
cin>>op1;
cin>>op2;
A.add(op1,op2);
A.divide(op1,op2);
A.substract(op1,op2);
A.multiply(op1,op2);
}
int add(op1,op2)
{
cout<<"add"<<endl;
cout<<(op1+op2)<<endl;
}
int divide(op1,op2)
{
cout<<"divide"<<endl;
cout<<(op1/op2)<<endl;
}
int substract(op1,op2)
{
cout<<"substract"<<endl;
cout<<(op1-op2)<<endl;
}
int multiply(op1,op2)
{
cout<<"multiply"<<endl;
cout<<(op1*op2)<<endl;
}
