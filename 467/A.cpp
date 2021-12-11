#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int free_spaces = 0;
    for (size_t i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;
        int free_space = q - p;
        if (free_space >= 2)
        {
            free_spaces++;
        }
    }
    cout << free_spaces;
}