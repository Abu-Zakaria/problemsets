#include <iostream>

using namespace std;

// n = rows
// m = cols
int get_steps(int n, int m, int rb, int cb, int rd, int cd)
{
    int steps = 0;
    int increment_r = 1;
    int increment_c = 1;

    while (rb != rd && cb != cd)
    {
        if (rb + 1 > n)
        {
            increment_r = -1;
        }
        if (cb + 1 > m)
        {
            increment_c = -1;
        }
        rb += increment_r;
        cb += increment_c;
        steps++;
    }
    return steps;
}

int main()
{
    int t;
    cin >> t;
    int results[t];

    for (size_t i = 0; i < t; i++)
    {
        int n, m, rb, cb, rd, cd;
        cin >> n >> m >> rb >> cb >> rd >> cd;

        int steps = get_steps(n, m, rb, cb, rd, cd);
        results[i] = steps;
    }
    for (size_t i = 0; i < t; i++)
    {
        cout << results[i] << '\n';
    }
}