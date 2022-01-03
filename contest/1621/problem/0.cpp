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

vector<string> analyze(int n, int k)
{
    vector<string> lines;
    int added = 0;
    for (size_t i = 0; i < n; i++)
    {
        string line;
        for (size_t j = 0; j < n; j++)
        {
            if (i == 0 && j == 0 || (i + 1) % 2 != 0 && ((i + 1) == (j + 1)) && added < k)
            {
                line.append("R");
                added++;
            }
            else
            {
                line.append(".");
            }
        }
        lines.push_back(line);
    }
    return lines;
}

void solve()
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        bool n_is_odd = false;
        if (n % 2 != 0)
        {
            n++;
            n_is_odd = true;
        }
        if (n / k < 2.0f)
        {
            PRINT("-1");
            continue;
        }
        if (n_is_odd)
        {
            n--;
        }

        vector<string> ans = analyze(n, k);
        PRINT_VEC(ans);
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