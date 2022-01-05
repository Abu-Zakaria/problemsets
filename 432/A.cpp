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
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}
int nxt()
{
    int x;
    cin >> x;
    return x;
}
template <typename T>
T nxt()
{
    T x;
    cin >> x;
    return x;
}
void solve()
{
    int n = nxt(), k = nxt();
    vector<int> players;
    FOR(i, n)
    {
        players.push_back(nxt());
    }
    sort(players.begin(), players.end());
    int eligables = 0;
    FOR(i, n)
    {
        int y = players.at(i);
        if (y + k < 6)
        {
            eligables++;
        }
        else
        {
            break;
        }
    }
    PRINT(floor(eligables / 3.0));
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
