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

int how_many_faces(string item)
{
    if (item == "Tetrahedron")
    {
        return 4;
    }
    else if (item == "Cube")
    {
        return 6;
    }
    else if (item == "Octahedron")
    {
        return 8;
    }
    else if (item == "Dodecahedron")
    {
        return 12;
    }
    else if (item == "Icosahedron")
    {
        return 20;
    }
    return 0;
}

void solve()
{
    int t = nxt();
    long long int ans = 0;

    FOR(i, t)
    {
        ans += how_many_faces(nxt<string>());
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