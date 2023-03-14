//difference in area  between rectangle and circle
#include <iostream>
using namespace std;
class circle;
class rectangle
{
    private:
    int l;
    int b;
    int a;
    public:
    void data()
    {
        l=5;
        b=10;
    }
    int area()
    {
        a=l*b;
    }
    friend int difference(rectangle a,circle b);
};

class circle
{
    int r;
    int a;
    public:
    void data()
    {
        r=3;
    }
    int area()
    {
        a=3.14*(r*r);
    }
    friend int difference(rectangle a,circle b);
};

int difference(rectangle a,circle b)
{
    cout<< a.a-b.a;
}
int main()
{
    rectangle r;
    r.data();
    r.area();
    circle c;
    c.data();
    c.area();
    cout<<" "<<difference(r,c);

}