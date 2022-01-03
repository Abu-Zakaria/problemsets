#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define PRINT(stuff) std::cout << stuff << endl
#define PRINT_NO_LINE(stuff) std::cout << stuff
#define PRINT_VEC(stuff)                      \
    for (size_t i = 0; i < stuff.size(); i++) \
    {                                         \
        PRINT(stuff.at(i));                   \
    }
#define PRINT_VEC_NO_LINE(stuff)              \
    for (size_t i = 0; i < stuff.size(); i++) \
    {                                         \
        PRINT_NO_LINE(stuff.at(i));           \
    }

void str_to_lower(string &str)
{
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c)
              { return tolower(c); });
}

bool str_has(string &str, char x)
{
    if (find(str.begin(), str.end(), x) != str.end())
    {
        return true;
    }
    return false;
}

string str_get_unique_chars(string &str)
{
    string res;
    for (size_t i = 0; i < str.size(); i++)
    {
        char x = str.at(i);
        if (res.size() == 0 || !str_has(res, x))
        {
            res.append(string(1, x));
        }
    }
    return res;
}

void solve()
{
    short int n;
    cin >> n;
    if (n < 26)
    {
        PRINT("NO");
        return;
    }
    string s;
    cin >> s;
    str_to_lower(s);
    string ans = str_get_unique_chars(s);
    if (ans.size() == 26)
    {
        PRINT("YES");
    }
    else
    {
        PRINT("NO");
    }
}

int main()
{
#ifdef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#endif
#ifndef ONLINE_JUDGE
    ifstream cin("input.txt");

    std::cin.rdbuf(cin.rdbuf());
#endif
    solve();
}