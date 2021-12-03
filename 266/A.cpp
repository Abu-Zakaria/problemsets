#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char colors[n];
    cin >> colors;

    char last_char;
    unsigned int to_be_removed = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (last_char)
        {
            if (last_char == colors[i])
            {
                to_be_removed++;
            }
        }
        last_char = colors[i];
    }

    cout << to_be_removed << '\n';
    return 0;
}