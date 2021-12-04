#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    unsigned long int position;

    cin >> position;

    unsigned long int steps = 0;

    for (long int i = 5; i > 0; i--)
    {
        if ((double)position / i >= 1)
        {
            unsigned long int new_steps = floor((double)position / i);
            steps += new_steps;
            position -= i * new_steps;
        }
    }

    cout << steps << '\n';
}