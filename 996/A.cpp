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
    int n, bills = 0;
    cin >> n;
    while (n / 100 >= 1.0f)
    {
        bills++;
        n -= 100;
    }
    while (n / 20 >= 1.0f)
    {
        bills++;
        n -= 20;
    }
    while (n / 10 >= 1.0f)
    {
        bills++;
        n -= 10;
    }
    while (n / 5 >= 1.0f)
    {
        bills++;
        n -= 5;
    }
    while (n / 1 >= 1.0f)
    {
        bills++;
        n -= 1;
    }
    PRINT(bills);
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