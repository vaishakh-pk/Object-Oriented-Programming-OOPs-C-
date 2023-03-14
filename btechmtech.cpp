#include <iomanip>
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
protected:
    int age, regnum;
    char name[50];

public:
    void getdata()
    {
        cout << "\n**************\n";
        cout << "\nEnter the name of the student : ";
        cin >> name;
        cout << "\nEnter age : ";
        cin >> age;
        cout << "Enter register number :";
        cin >> regnum;
    }
    Student()
    {
        age = 0;
        regnum = 0;
    }
    virtual void sort(int n) = 0;
    virtual void putdata() = 0;
};
class BTechStud : public Student
{
private:
    int mark;

public:
    BTechStud() { mark = 0; }
    void getmark()
    {
        getdata();
        cout << "\nEnter the mark of the student :";
        cin >> mark;
    }
    void sort(int n)
    {
        BTechStud temp;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (this[j].mark < this[j + 1].mark)
                {
                    temp = this[j];
                    this[j] = this[j + 1];
                    this[j + 1] = temp;
                }
                else if (this[j].mark == this[j + 1].mark)
                {
                    if (strcmp(this[j].name, this[j + 1].name) > 0)
                    {
                        temp = this[j];
                        this[j] = this[j + 1];
                        this[j + 1] = temp;
                    }
                }
            }
        }
    }
    void putdata()
    {
        cout << "\n**************\n";
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Register number : " << regnum << endl;
        cout << "Marks : " << mark << endl;
        cout << "\n**************\n";
    }
};
class MTechStud : public Student
{
private:
    double gpa;

public:
    MTechStud() { gpa = 0; }
    void getgpa()
    {
        getdata();
        cout << "\nEnter the GPA of the student :";
        cin >> gpa;
    }
    void sort(int n)
    {
        MTechStud temp;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (this[j].gpa < this[j + 1].gpa)
                {
                    temp = this[j];
                    this[j] = this[j + 1];
                    this[j + 1] = temp;
                }
                else if (this[j].gpa == this[j + 1].gpa)
                {
                    if (strcmp(this[j].name, this[j + 1].name) > 0)
                    {
                        temp = this[j];
                        this[j] = this[j + 1];
                        this[j + 1] = temp;
                    }
                }
            }
        }
    }
    void putdata()
    {
        cout << "\n**************\n";
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Register number : " << name << endl;
        cout << "GPA : " << fixed << setprecision(1) << gpa << endl;
        cout << "\n**************\n";
    }
};
int main()
{
    int n = 0, opt = 0;
    BTechStud b[100];
    MTechStud m[100];
    Student *ptr;
    cout << "\n**************\n";
    cout << "\n******Course******\n";
    cout << "1. Btech\n2.Mtech\nSelect your Course : ";
    cin >> opt;
    switch (opt)
    {
    case 1:
        ptr = b;
        cout << "\nEnter the Number of Btech Students :";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "\n Btech Student Details ";
            cout << "\n-----------------------------------------";
            cout << "\n\nEnter the details of the student " << i + 1;
            b[i].getmark();
        }
        ptr->sort(n); // runtime polymorphism
        cout << "\n Btech Student Details ";
        cout << "\n-----------------------------------------";
        for (int i = 0; i < n; i++)
        {
            cout << "\n\nThe details of the student " << i + 1;
            b[i].putdata();
        }
        break;
    case 2:
        ptr = m;
        cout << "\nEnter the Number of Mtech Students :";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "\n Mtech Student Details ";
            cout << "\n-----------------------------------------";
            cout << "\n\nEnter the details of the student " << i + 1;
            m[i].getgpa();
        }
        ptr->sort(n); // runtime polymorphism
        cout << "\n Btech Student Details ";
        cout << "\n-----------------------------------------";
        for (int i = 0; i < n; i++)
        {
            cout << "\n\nThe details of the student " << i + 1;
            m[i].putdata();
        }
    }
    return 0;
}