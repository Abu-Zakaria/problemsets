/** 
 * unsolved
 * bad code :(
 */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        float n;
        cin >> n;
        int found = 0;
        for (size_t i = 1; i <= n; i++)
        {
            float sq = sqrt(n);
            float sq3 = cbrt(n);
            if (floor(sq) == sq || floor(sq3) == sq3)
            {
                found++;
            }
        }
        cout << found << '\n';
    }
}