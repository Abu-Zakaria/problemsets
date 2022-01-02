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

template <typename T>
int vector_how_many_times(vector<T> vec, T el)
{
    int freq = 0;
    for (T x : vec)
    {
        if (x == el)
        {
            freq++;
        }
    }
    return freq;
}

void solve()
{
    short int n;
    cin >> n;
    vector<short int> homes, aways;
    int ans = 0;

    for (size_t i = 0; i < n; i++)
    {
        short int h, a;
        cin >> h >> a;
        homes.push_back(h);
        aways.push_back(a);
    }
    for (size_t i = 0; i < n; i++)
    {
        short int h_el = homes.at(i);
        ans += vector_how_many_times(aways, h_el);
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