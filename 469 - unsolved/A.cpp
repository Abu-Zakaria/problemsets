#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define PRINT(stuff) std::cout << stuff << endl
#define PRINT_VEC(stuff)                      \
    for (size_t i = 0; i < stuff.size(); i++) \
    {                                         \
        PRINT(stuff.at(i));                   \
    }

vector<long long int> get_n_numbers_from_1(long long int n)
{
    vector<long long int> result;
    for (size_t i = 1; i <= n; i++)
    {
        result.push_back(i);
    }
    return result;
}

void split_str(std::string const &str, const char delim,
               std::vector<std::string> &out)
{
    // create a stream from the string
    stringstream s(str);

    std::string s2;
    while (getline(s, s2, delim))
    {
        out.push_back(s2); // store the string in s2
    }
}

template <typename T>
vector<T> find_unique_items(vector<T> stuffs)
{
    vector<T> items;
    for (size_t i = 0; i < stuffs.size(); i++)
    {
        if (find(items.begin(), items.end(), stuffs.at(i)) == items.end())
        {
            items.push_back(stuffs.at(i));
        }
    }
    return items;
}

void solve()
{
    long long n;
    string n_s;
    getline(cin, n_s);
    n = stoi(n_s);

    vector<long long int> all_levels = get_n_numbers_from_1(n);

    string x_s;
    string y_s;
    vector<long long int> x;
    vector<long long int> y;

    getline(cin, x_s);
    getline(cin, y_s);

    vector<string> x_split;
    vector<string> y_split;
    const char delim = ' ';

    split_str(x_s, delim, x_split);
    split_str(y_s, delim, y_split);

        if (comb_int == all_levels)
    {
        PRINT("I become the guy.");
    }
    else
    {
        PRINT("Oh, my keyboard!");
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