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

void split_str(std::string const &str, const char delim,
               std::vector<std::string> &out)
{
    // create a stream from the string
    stringstream s(str);

    std::string s2;
    while (getline(s, s2, delim))
    {
        out.push_back(s2); // store the string in s2
    }
}

template <typename T>
bool vector_has(vector<T> vec, T el)
{
    if (find(vec.begin(), vec.end(), el) != vec.end())
    {
        return true;
    }
    return false;
}

void solve()
{
    string str;
    getline(cin, str);

    str.erase(str.begin(), str.begin() + 1);
    str.erase(str.end() - 1, str.end());
    vector<string> letters;
    char delim = ',';
    split_str(str, delim, letters);

    vector<string> ans;

    for (size_t i = 0; i < letters.size(); ++i)
    {
        string el = letters.at(i);
        if (i > 0)
        {
            el.erase(el.begin(), el.begin() + 1);
        }
        if (!vector_has<string>(ans, el) || ans.size() == 0)
        {
            ans.push_back(el);
        }
    }
    PRINT(ans.size());
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