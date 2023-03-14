#include <iostream>
using namespace std;

class person
{
    private:
    char name[30];
    int d,m,y,age,tdy;
    public:
    void input(int i)
    {
        cout<<"Enter the name : "<<endl;
        cin>>name;
        cout<<"Enter dob (dd/mm/yyyy) : "<<endl;
        cin>>d>>m>>y;
    }
    void sort()
    {

    }
    void display()
    {
        cout<<name<<endl;
        cout<<d<<"/"<<m<<"/"<<y<<"/"<<endl;
        cout<<"Age : "<<age<<endl;
    }
    void age_chk(int tdy)
    {
        age=tdy-y;
    }

};

int main()
{
    int n;
    int tdy;
    cout<<"Enter the number of people : "<<endl;
    cin>>n;
    person a[n];
    for (int i = 0; i < n; i++)
    {
        a[i].input(i);
    }
    cout<<"Enter current year : "<<endl;
    cin>>tdy;
    for (int i = 0; i < n; i++)
    {
        a[i].age_chk(tdy);
    }
    for (int i = 0; i < n; i++)
    {
        a[i].display();
    }
    

}