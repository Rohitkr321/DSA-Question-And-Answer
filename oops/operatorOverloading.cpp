#include <bits/stdc++.h>
using namespace std;
class comp
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << a << " " << b << endl;
    }

    comp operator + (comp c)
    { // here we define more than one defination of '+' operator then it is called operator overlaoding.
        comp temp;
        temp.a = a + c.a;
        temp.b = b + c.b;

        return temp;
    }
};
int main()
{
    comp c1, c2, c3;
    c1.setdata(3, 5);
    c2.setdata(4, 8);
    // c3 = c1.add(c2);//we can also do.
    c3 = c1 + c2; // we can also do.
    c3.showdata();
    return 0;
}