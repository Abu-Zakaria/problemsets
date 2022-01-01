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

vector<int> str_to_int_vec(string &str)
{
    vector<char> temp(str.begin(), str.end());
    vector<int> result;
    for (char x : temp)
    {
        result.push_back(x - '0');
    }
    return result;
}

void solve()
{
    string x, y;
    cin >> x >> y;
    vector<int> x_ints, y_ints;

    x_ints = str_to_int_vec(x);
    y_ints = str_to_int_vec(y);

    vector<int> answer;

    for (size_t i = 0; i < x_ints.size(); i++)
    {
        if (x_ints.at(i) + y_ints.at(i) == 1)
        {
            answer.push_back(1);
        }
        else
        {
            answer.push_back(0);
        }
    }

    PRINT_VEC_NO_LINE(answer);
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