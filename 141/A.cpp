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
#define PRINTYES PRINT("YES")
#define PRINTNO PRINT("NO")
#define FOR(i, a) for (size_t(i) = 0; i < (a); ++(i))
#define vecstr vector<string>
#define vecint vector<int>
#define isodd(x) x % 2 != 0
#define iseven(x) x % 2 == 0
#define all(x) (x).begin(), (x).end()

pair<vecstr, vecstr> vec_str_get_uncommons(vector<string> &a, vector<string> b)
{
    vector<string> a_uncommons;

    for (size_t i = 0; i < a.size(); i++)
    {
        vector<string>::iterator it = find(all(b), a.at(i));
        if (it != b.end())
        {
            b.erase(it);
        }
        else
        {
            a_uncommons.push_back(a.at(i));
        }
    }
    return {a_uncommons, b};
}

std::vector<std::string> str_split_by_len(const std::string &str, int splitLength)
{
    int NumSubstrings = str.length() / splitLength;
    std::vector<std::string> ret;

    for (auto i = 0; i < NumSubstrings; i++)
    {
        ret.push_back(str.substr(i * splitLength, splitLength));
    }

    // If there are leftover characters, create a shorter item at the end.
    if (str.length() % splitLength != 0)
    {
        ret.push_back(str.substr(splitLength * NumSubstrings));
    }

    return ret;
}

void solve()
{
    string a, b, x;
    cin >> a >> b >> x;

    if (a.size() + b.size() != x.size())
    {
        PRINTNO;
        return;
    }
    vector<string> av, bv, xv;

    av = str_split_by_len(a, 1);
    bv = str_split_by_len(b, 1);
    xv = str_split_by_len(x, 1);
    pair<vecstr, vecstr> p = vec_str_get_uncommons(av, xv);
    pair<vecstr, vecstr> q = vec_str_get_uncommons(bv, p.second);

    if (p.first.size() > 0 || q.first.size() > 0 || q.second.size() > 0)
    {
        PRINTNO;
    }
    else
    {
        PRINTYES;
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