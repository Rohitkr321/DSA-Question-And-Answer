#include <bits/stdc++.h>
using namespace std;
// when coder not make any construtor the compliler make 2 typr of constructor 1. Default constructor 2. Copy constructor.
class home
{
    static int a;
    int b = 4;

public:
    home(int a, int b)
    { // parematertized constructor
        this->a = a;
        this->b = b;
        cout << a << " " << b << endl;
    }
    home(int a)
    { // parematertized constructor
        a = a;
        cout << a << " " << b << endl;
    }
    home()
    { // default constructor
        cout << a << " " << b << endl;
    }
    home(home &h)
    { // copy constructor.
        a = h.a;
        b = h.b;
        cout << a << " " << b << endl;
    }
};
int home::a;
int main()
{
    home h4;
    home h2(9);
    home h1(5, 3);
    home h3(h1);
    h2 = 6;
    return 0;
}