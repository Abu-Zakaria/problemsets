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

vector<string> vec_str_get_uncommons(vector<string> &a, vector<string> &b)
{
    for (size_t i = 0; i < ; i++)
    {
        /* code */
    }
}

void solve()
{
    string a, b, x;
    cin >> a >> b >> x;
    vector<string> av, bv, xv;
    char delim = '\0';
    split_str(a, delim, av);
    split_str(b, delim, bv);
    split_str(x, delim, xv);
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