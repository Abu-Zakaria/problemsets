#include <iostream>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int min_width = 0;

    for (size_t i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > h)
        {
            min_width += 2;
            continue;
        }
        min_width += 1;
    }

    cout << min_width;
}