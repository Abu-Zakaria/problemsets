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

void solve()
{
    int t = nxt();
    FOR(i, t)
    {
        long long int a = nxt(), b = nxt(), c = nxt();
        bool ans = false;
        if (a > c)
        {
            long long temp = c;
            c = a;
            a = temp;
        }

        long long int target_a = (2 * b) - c;
        long long int target_b = (a + c) / 2;
        long long int target_c = (2 * b) - a;

        // PRINT(target_a << " " << a);
        // PRINT(target_b << " " << b);
        // PRINT(target_c << " " << c);

        if (target_a == a && target_b == b && target_c == c)
        {
            PRINT("YES");
            continue;
        }
        if (target_a > a && target_a % a == 0)
        {
            PRINT("YES");
            continue;
        }
        if (target_b > b && target_b % b == 0)
        {
            PRINT("YES");
            continue;
        }
        if (target_c > c && target_c % c == 0)
        {
            PRINT("YES");
            continue;
        }
        PRINT("NO");
        // if ((target_b % b) == 0)
        // {
        //     PRINT("YES");
        //     continue;
        // }
        // if (target_c % c == 0)
        // {
        //     PRINT("YES");
        //     continue;
        // }
        // if (target_a % a == 0)
        // {
        //     PRINT("YES");
        //     continue;
        // }
        // PRINT("NO");
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