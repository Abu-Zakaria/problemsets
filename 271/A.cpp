#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool checkDistinct(string str)
{
    vector<char> elements;

    for (size_t i = 0; i < str.length(); i++)
    {
        if (find(elements.begin(), elements.end(), str.at(i)) == elements.end())
        {
            elements.push_back(str.at(i));
        }
        else
        {
            // the interating char already exists in the string!
            return false;
        }
    }
    return true;
}

void incrementStringNumber(string &str)
{
    int d = stoi(str);
    str = to_string(++d);
}

int main()
{
    string s;
    cin >> s;

    incrementStringNumber(s);

    while (!checkDistinct(s))
    {
        incrementStringNumber(s);
    }

    cout << s;
}