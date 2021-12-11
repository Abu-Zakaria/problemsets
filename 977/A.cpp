#include <iostream>

using namespace std;

int main()
{
    unsigned long int n;
    unsigned short int k;

    cin >> n >> k;

    while (k > 0)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n -= 1;
        }
        k--;
    }

    cout << n << '\n';
}