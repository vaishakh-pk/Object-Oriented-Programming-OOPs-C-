#include <iostream>
using namespace std;
class Distance{
int feet,inches;
public:
void input(){
  cout<<"Enter distance:\nin feet: ";
  cin>>feet;
  cout<<"In Inch: ";
  cin>>inches;

}
void print(){
    cout<<"Final distance is: "<<feet<<" feet : "<<inches<<" inches\n";
}
friend Distance operator +(Distance a,Distance b);
void operator <(Distance a){
  
  if(a.feet>feet){
      cout<<"Second distance is greater";
  }
  else if(a.feet == feet && a.inches > inches ){
      cout<<"Second distance is greater";
  }
  else if(a.feet == feet && a.inches == inches){
      cout<<"Both are equal";
  }
  else{
      cout<<"First distance is greater";
  }

}
};
Distance operator +(Distance a, Distance b){
    Distance temp;
    temp.feet = a.feet + b.feet;
    temp.inches = a.inches + b.inches;
    if(a.inches + b.inches >= 12 ){
        temp.feet++;
        temp.inches = a.inches + b.inches - 12;
    }

     return temp;
}
int main(){
    Distance a,b,c;
    a.input();
    b.input();
    c=a+b;
    c.print();
    a<b;
    
}