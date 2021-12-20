#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string result = "I hate";
    if (n == 1)
    {
        result += " it";
    }
    else
    {
        for (size_t i = 0; i < n - 1; i++)
        {
            result += " that I ";
            if (i % 2)
            {
                result += "hate";
            }
            else
            {
                result += "love";
            }
            if (i == n - 2)
            {
                result += " it";
            }
        }
    }

    cout << result;
}