#include <iostream>
using namespace std;
class Date {
    public: 
     
        bool leapChecker(){
              if(month==2 &&(year%4== 0||year%400==0||year%100==0)){
                  return true;
              }
              else{
                  return false;
              }
          }
          bool thirtyChecker(){
              if((month< 8 && month%2==0 && month != 2) || (month>7 && month%2!=0 && month != 2)){
                  return true;
              }
              else{
                  return false;
              }
          }
    
     int day, month=0, year=0;
          void input(){
              cout<<"Enter day/month/year ";
              cin>>day>>month>>year;          
          }       
          void dateValidator(){
              if(month > 12){
                  cout<<"Invalid month";exit(1);
              } 
              else if(day > 31) {
                  cout<<"Invalid day";exit(1);
                  }
                  else if(day<=0||month<=0||year<=0){
                      cout<<"Invalid date";
                      exit(1);
                  }
              else if((month < 8 && month%2==0 && day>=31) || (month>7 && month%2!=0 && day>=31) || (month ==2 && leapChecker() == false && day > 28) || (month == 2 && leapChecker() == true && day>29) ){
                  cout<<"Invalid date";
                  exit(1);
              }
              else {
                  cout<<"\nValid date";
              }
          }      
        
         
          void datePrinter(){
              cout<<"\nDATE AFTER ADDITION: "<<day<<" / "<<month<<" / "<<year;
          }  
          friend Date operator +(Date a, int b);
};
 Date operator +(Date a, int add){
              Date temp;
              
                if((a.leapChecker() == true && a.day == 29)|| (a.leapChecker() == false && a.day == 28)){
               temp.day = add;
                temp.month = a.month+1;
                temp.year = a.year;
            }                
           else if((a.thirtyChecker() == true && a.day == 30 && a.month != 12) || (a.thirtyChecker() == false && a.day == 31 && a.month != 12) ){
                 temp.day = add;
                temp.month = a.month+1;
                temp.year =a.year;
           }
            else if(a.month == 12 && a.day == 31){
               temp.day = add;
                temp.month = 1;
                temp.year =  a.year+1;
            }

            else if(a.month==12 && a.day+add>31)
            {
                    temp.day = a.day-(31 -add);
                    temp.month = 1;
                    temp.year = a.year;
            }
           
            else if(a.thirtyChecker() == true && a.day < 30){
                if(a.day + add > 30){
                    temp.day = a.day-(30 -add);
                  temp.month = a.month +1;
                    temp.year = a.year;
                }
                else{
                     temp.day = a.day+add;
                temp.month = a.month;
                temp.year = a.year;

                }
               
            }
            else if(a.leapChecker()== true && a.day < 29){
                if(a.day + add > 29){
                     temp.day = a.day-(29 -add);
                    temp.month = a.month+ 1;
                    temp.year = a.year;

                }
                else {
                temp.day = a.day+add;
                temp.month = a.month;
                temp.year = a.year;


                }
            }
            else if(a.leapChecker() == false && a.day<28){
                if(a.day + add > 28){
                     temp.day = a.day-(28 -add);
                    temp.month = a.month+ 1;
                    temp.year = a.year;

                }
                else {
                temp.day = a.day+add;
                temp.month = a.month;
                temp.year = a.year;


                }
            }
            else if(a.thirtyChecker() == false && a.day< 31){
               if(a.day + add > 31){
                    temp.day = a.day-(31 -add);
                    temp.month = a.month+ 1;
                    temp.year = a.year;
                }
                else{
                      temp.day = a.day+add;
                 temp.month = a.month;
                temp.year = a.year;

                }
              
            }
            return temp;
          }
int main(){
    Date d,b;
    int day;
    d.input();
    d.dateValidator();
    cout<<"\nEnter the number of days to be added: ";
    cin>>day;
    b= d+day;
    b.datePrinter();
    
}