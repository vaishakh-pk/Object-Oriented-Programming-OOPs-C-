#include<iostream>
using namespace std;
class Complex
{
public:
int real,img;

Complex operator ++()
{
Complex x;
x.real=++real;
x.img=++img;
return x;
}

Complex operator ++ (int)
{
Complex x;
x.real=real++;
x.img=img++;
return x;
}
};

int main ()
{
Complex a,b;
cout<<"\nEnter real and imaginary part of the complex number:";
cin>>a.real>>a.img;
cout<<"\n++("<<a.real<<"+"<<a.img<<"i)=(";
++a;
cout<<a.real<<"+"<<a.img<<"i)";
cout<<"\n("<<a.real<<"+"<<a.img<<"i)++=(";
a++;
cout<<a.real<<"+"<<a.img<<"i)";
}