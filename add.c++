#include<iostream>
using namespace std;
class addition
{
public:
int add(int,int);
};
int addition::add(int a, int b)
{
int c;
cout<<"Enter the value of numbers : "<<endl;
cin>>a>>b;
c=a+b;
return c;
}
void main()
{
addition a;
a.add(5,1);
cout<<"The sum of two number is: "<<c;
}

