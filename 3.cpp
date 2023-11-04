#include <iostream>
using namespace std;

void p1()
{
    int n = 0;
    cout << "Enter no.of lines :" << endl;
    cin >> n;
    int t = int(n / 2) + 1;
    int m = t - 1;
    int s = 1;
    int c = 1;
    for (int k = 0; k < n; k++)
    {
        if (k == t)
        {
            m = 1;
            s = t - 1;
        }
        if (k > t - 1)
        {
            for (int i = 0; i < m; i++)
            {
                cout << " ";
            }
            m++;
            for (int i = 0; i < s; i++)
            {
                cout << c << " ";
                c++;
            }
            s--;
        }
        else
        {

            for (int i = 0; i < m; i++)
            {
                cout << " ";
            }
            m--;
            for (int i = 0; i < s; i++)
            {
                cout << c << " ";
                c++;
            }
            s++;
        }
        cout << endl;
    }
}
