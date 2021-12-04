#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        unsigned long long int x1, p1;
        cin >> x1 >> p1;
        x1 *= pow(10, p1);
        unsigned long long int x2, p2;
        cin >> x2 >> p2;
        x2 *= pow(10, p2);
        if (x1 < x2)
        {
            cout << "<" << endl;
        }
        else if (x1 == x2)
        {
            cout << "=" << endl;
        }
        else if (x1 > x2)
        {
            cout << ">" << endl;
        }
    }
}