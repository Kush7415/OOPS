// WAP to access the private number of a class using friend function  and friend class in c++

#include <iostream>
using namespace std;

class base
{
private:
    int p;

protected:
    int k;

public:
    base()
    {
        p = 15;
        k = 69;
    }

    friend void friendFunction(base &obj);
};

void friendFunction(base &obj)
{
    cout << "Private Variable: " << obj.p
         << endl;
    cout << "Protected Variable: " << obj.k;
}

int main()
{
    base object1;
    friendFunction(object1);

    return 0;
}
