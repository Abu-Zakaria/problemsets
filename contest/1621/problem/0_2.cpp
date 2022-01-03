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
#define FOR(i, a) for (size_t(i) = 0; i < (a); ++(i))
#define vecstr vector<string>
#define isodd(x) x % 2 != 0
#define iseven(x) x % 2 == 0

int n, k;

void solve()
{
    int t;
    cin >> t;
    FOR(h, t)
    {
        cin >> n >> k;
        if (k > ((n + 1) / 2))
        {
            PRINT("-1");
        }
        else
        {
            vecstr lines;
            FOR(i, n)
            {
                string line;
                FOR(j, n)
                {
                    if (i == 0 && j == 0 || iseven(i) && i + 1 == j + 1 && k > 0)
                    {
                        k--;
                        line.append("R");
                    }
                    else
                    {
                        line.append(".");
                    }
                }
                lines.push_back(line);
            }
            PRINT_VEC(lines);
        }
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