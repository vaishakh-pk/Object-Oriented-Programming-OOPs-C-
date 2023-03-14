#include <iostream>
using namespace std;
class Distance{
    int feet;
    double inches;
    public:
    void input(){
  cout<<"** Enter distance **\nIn feet: ";
  cin>>feet;
  cout<<"In Inch: ";
  cin>>inches;

}
void print(){
    cout<<"After conversion distance is: "<<feet<<" feet : "<<inches<<" inches\n";
}
    
    Distance(double meter){
        int temp;
        
        temp = meter *39.37;
        feet = (temp/12);
        inches = temp - feet*12;

    }
    operator double(){
        double temp;
        temp = feet*12 + inches;
        return temp/39.37 ;
    }

};
int main(){
    double meter;
    cout<<"Enter distance in meter: ";
    cin>>meter;
    Distance a = meter;
    a.print();
    a.input();
    meter= a;
    cout<<"Distance in meters: "<<meter;
}