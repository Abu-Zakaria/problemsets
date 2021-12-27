#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p[n], result[n];

    // enter the inputs
    for (size_t i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        result[p[i] - 1] = i + 1;
    }

    for (size_t i = 0; i < n; i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << result[i];
    }
}