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
