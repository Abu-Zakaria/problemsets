#include <string>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        size_t len = s.length();

        if (len % 2 != 0)
        {
            cout << "NO" << '\n';
        }
        else
        {
            if (s.substr(0, len / 2) == s.substr(len / 2, len / 2))
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }
}