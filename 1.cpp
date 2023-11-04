// Q1. To count the number of objects created in a C++ program

#include <iostream>
using namespace std;

class ObjectCounter
{
private:
    static int objectCount;

public:
    ObjectCounter()
    {
        objectCount++;
    }
    static int getObjectCount()
    {
        return objectCount;
    }
};

int ObjectCounter::objectCount = 0;

int main()
{
    ObjectCounter obj1;
    ObjectCounter obj2;
    ObjectCounter obj3;

    cout << "Number of objects: " << ObjectCounter::getObjectCount() << endl;
    ObjectCounter obj4;

    cout << "Number of objects: " << ObjectCounter::getObjectCount() << endl;

    return 0;
}
