#include <iostream>

using namespace std;

long analyze(int a[], size_t size)
{
    long height = 1;
    long _last;
    for (size_t i = 0; i < size; i++)
    {
        if (a[i] == 1)
        {
            height++;
            if (i > 0 && a[i - 1] == 1)
            {
                height += 4;
            }
        }
        else
        {
            if (i > 0 && a[i - 1] == 0)
            {
                return -1;
            }
        }
        _last = a[i];
    }

    return height;
}

int main()
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long result = analyze(a, n);

        cout << result << '\n';
    }
}