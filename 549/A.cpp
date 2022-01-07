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

std::vector<std::string> split_by_len(const std::string &str, int splitLength)
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

bool analyze_face_val(string &cell, bool &f, bool &a, bool &c, bool &e)
{
    if (cell == "f")
    {
        f = true;
        return true;
    }
    if (cell == "a")
    {
        a = true;
        return true;
    }
    if (cell == "c")
    {
        c = true;
        return true;
    }
    if (cell == "e")
    {
        e = true;
        return true;
    }
    return false;
}

void solve()
{
    int rows = nxt(), cols = nxt();
    vector<vector<string>> cell_info;
    int found_faces = 0;
    FOR(i, rows)
    {
        string line = nxt<string>();
        vector<string> cells = split_by_len(line, 1);
        cell_info.push_back(cells);
    }
    FOR(i, cell_info.size() - 1)
    {
        vecstr curr_line = cell_info.at(i);
        vecstr next_line = cell_info.at(i + 1);
        FOR(j, curr_line.size() - 1)
        {
            string cell = curr_line.at(j);
            if (cell == "x")
            {
                continue;
            }
            set<string> box;
            box.insert(cell);
            string j_p_1 = curr_line.at(j + 1);
            string i_p_1 = next_line.at(j);
            string i_p_j_1 = next_line.at(j + 1);
            if (j_p_1 != "x")
            {
                box.insert(j_p_1);
            }
            if (i_p_1 != "x")
            {
                box.insert(i_p_1);
            }
            if (i_p_j_1 != "x")
            {
                box.insert(i_p_j_1);
            }
            if (box.count("f") && box.count("a") && box.count("c") && box.count("e"))
            {
                found_faces++;
            }
        }
    }
    PRINT(found_faces);
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