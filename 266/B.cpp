#include <iostream>
#include <string>

using namespace std;

int main()
{
    const char boy = 'B';
    const char gurl = 'G';
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    for (size_t i = 0; i < t; i++)
    {
        string new_s = s;
        for (size_t j = 0; j < n; j++)
        {
            if (s.at(j) == boy && (j < s.length() - 1) && s.at(j + 1) == gurl)
            {
                new_s[j] = gurl;
                new_s[j + 1] = boy;
            }
        }
        s = new_s;
    }
    cout << s;
}