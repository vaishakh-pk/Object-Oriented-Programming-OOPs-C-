#include <iostream>
using namespace std;

class num
  {  int x,y;
      public: num(){}
	        num(int j,int k)
		{
		  x=j;
		  y=k;
		}
	         void show()
		  {cout<<"x="<<x<<"y"<<y<<endl;
		  }
num operator +(num D)
  {
	num T;
	T.x=x+D.x;
	T.y=y+D.y;
	return T;
  }
};
int main()
  {
  num A(6,2),B(2,7),C;
  A.show();
  B.show();
  C=A+B;
  C.show();
 }
