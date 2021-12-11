#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    cin >> n;

    unsigned int members = 0;
    unsigned int minimum_seats = 0;
    for (size_t i = 0; i < n; i++)
    {
        unsigned int a, b;
        cin >> a >> b;
        members -= a;
        members += b;
        if (minimum_seats < members)
            minimum_seats = members;
    }

    cout << minimum_seats;
}