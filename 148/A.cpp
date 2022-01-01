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

void solve()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int ans = 0;

    for (size_t i = 1; i <= d; i++)
    {
        if (
            i % k == 0 ||
            i % l == 0 ||
            i % m == 0 ||
            i % n == 0)
        {
            ans++;
        }
    }
    PRINT(ans);
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