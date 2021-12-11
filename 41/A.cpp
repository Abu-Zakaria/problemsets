#include <iostream>
#include <string>

using namespace std;

bool validate(string string_1, string string_2)
{
    if (string_1.length() != string_2.length())
    {
        return false;
    }
    return true;
}

int main()
{
    string s, t;

    cin >> s >> t;

    if (!validate(s, t))
    {
        cout << "NO";
        return 0;
    }

    for (size_t i = 0; i < s.length(); i++)
    {
        if (s.at(i) != t.at(s.length() - 1 - i))
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}