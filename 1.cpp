#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int cl;
    int marks;
} students[10];

int main()
{
    for (int i = 0; i < 1; i++)
    {
        cin >> students[i].name;
        cin >> students[i].roll;
        cin >> students[i].cl;
        cin >> students[i].marks;
    }
    for (int i = 0; i < 1; i++)
    {
        cout << "name:" << students[i].name << endl;
        cout << "roll no. :" << students[i].roll << endl;
        cout << "c1:" << students[i].cl << endl;
        cout << "marks:" << students[i].marks << endl;
    }
    return 0;
}
