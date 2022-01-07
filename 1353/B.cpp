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
#define vecint vector<int>
#define isodd(x) x % 2 != 0
#define iseven(x) x % 2 == 0
#define all(x) (x).begin(), (x).end()
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

int vec_get_sum(vecint numbers)
{
    int sum = 0;
    FOR(i, numbers.size())
    {
        sum += numbers.at(i);
    }
    return sum;
}

void solve()
{
    int t = nxt();
    FOR(i, t)
    {
        int n = nxt(), k = nxt();
        vecint a, b;
        FOR(i, n * 2)
        {
            if (i < n)
            {
                a.push_back(nxt());
            }
            else
            {
                b.push_back(nxt());
            }
        }
        sort(all(a));
        sort(all(b), greater<int>());
        // PRINT_VEC(a);
        // PRINT("===");
        // PRINT_VEC(b);
        // PRINT("++++");
        FOR(i, a.size())
        {
            if (k < 1)
            {
                break;
            }
            if (a.at(i) < b.at(i))
            {
                int _temp = b.at(i);
                b[i] = a[i];
                a[i] = _temp;
                --k;
            }
        }
        PRINT(vec_get_sum(a));
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