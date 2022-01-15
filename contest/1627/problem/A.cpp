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
#define PRINTYES PRINT("YES")
#define PRINTNO PRINT("NO")
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

void analyze()
{
    int n = nxt(), m = nxt(), r = nxt(), c = nxt();
    vector<vector<string>> board;
    FOR(j, n)
    {
        string curr_row = nxt<string>();
        vecstr _row = str_split_by_len(curr_row, 1);
        board.push_back(_row);
    }
    vector<string> target_row = board.at(r - 1);
    if (target_row.at(c - 1) == "B")
    {
        PRINT(0);
        return;
    }
    FOR(j, m)
    {
        if (target_row.at(j) == "B")
        {
            PRINT(1);
            return;
        }
    }
    FOR(j, n)
    {
        if (board.at(j).at(c - 1) == "B")
        {
            PRINT(1);
            return;
        }
    }
    FOR(j, n)
    {
        FOR(k, m)
        {
            if (board.at(j).at(k) == "B")
            {
                PRINT(2);
                return;
            }
        }
    }
    PRINT(-1);
    return;
}

void solve()
{
    int t = nxt();
    FOR(i, t)
    {
        analyze();
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
