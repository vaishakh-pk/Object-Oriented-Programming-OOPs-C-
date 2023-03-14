#include<iostream>
using namespace std;
 
const int max_yr = 9999;
const int min_yr = 1000;

int Leap(int year)
{
if((year % 4 == 0) && (year % 100 != 0) ||(year % 400 == 0))
{
    return 1;
}
else return 0;
};

 

int date(int d, int m, int y)
{

    if (y > max_yr || y < min_yr)
    return 0;
    if (m < 1 || m > 12)
    return 0;
    if (d < 1 || d > 31)
    return 0;
 
    if (m == 2)
    {
        if (Leap(y)==1)
        return (d <= 29);
        else
        return (d <= 28);
    }
 
    if (m == 4 || m == 6 || m == 9 || m == 11)
    return (d <= 30);
 
    return 1;
}

void output(int d,int m,int y)
{   if(d<10 && m<10)
    {
       cout<<"Valid, Next valid date is "<<"0"<<d<<"/ "<<"0"<<m<<"/ "<<y; 
    }
    else if(d<10)
    {
       cout<<"Valid, Next valid date is "<<"0"<<d<<"/ "<<m<<"/ "<<y; 
    }
    else if(m<10)
    {
       cout<<"Valid, Next valid date is "<<d<<"/ "<<"0"<<m<<"/ "<<y; 
    }
    else cout<<"Valid, Next valid date is "<<d<<"/ "<<m<<"/ "<<y;
}
 

int main(void)
{
int d,m,y;
cout<<"Enter the day/month/year : ";
cin>>d>>m>>y;
if(date(d, m, y)==1)
{
    d++;
    if(date(d,m,y)==0)
    {
        d=1,m++;
        if(date(d,m,y)==0)
        {
           d=1, m=1,y++;
           output(d,m,y); 
        }
        else output(d,m,y); 
    }
    else output(d,m,y); 
}
else cout<<"Invalid date";
}