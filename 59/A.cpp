#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    unsigned int upper = 0, lower = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (islower(s.at(i)))
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }
    for_each(s.begin(), s.end(), [&](char &item)
             {
                 if (lower >= upper)
                 {
                     item = tolower(item);
                 }
                 else
                 {
                     item = toupper(item);
                 }
             });
    cout << s << '\n';
}