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
    for (int i = 0; i < 2; i++)
    {
        cin >> students[i].name;
        cin >> students[i].roll;
        cin >> students[i].cl;
        cin >> students[i].marks;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << students[i].name << endl;
        cout << students[i].roll << endl;
        cout << students[i].cl << endl;
        cout << students[i].marks << endl;
    }
    int max = 0;
    int min = 0;
    for (int i = 0; i < 2; i++)
    {
        if (students[i].marks < students[min].marks)
            min = i;
        if (students[i].marks > students[max].marks)
            max = i;
    }
    cout << "max marks -" << students[max].name << endl;
    cout << "min marks -" << students[min].name << endl;
    return 0;
}
