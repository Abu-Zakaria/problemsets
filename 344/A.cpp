#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    char last_item[3];

    int groups = 0;

    for (size_t i = 0; i < n; i++)
    {
        char item[3];
        cin >> item;
        if (*item != *last_item)
        {
            groups++;
        }
        *last_item = *item;
    }

    cout << groups;
}