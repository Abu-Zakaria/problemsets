#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

bool checkPalindrome(string str)
{
    double mid = ceil((double)str.length() / 2);
    bool result = true;

    for (size_t i = 0; i < mid; i++)
    {
        if (str.at(i) != str.at(str.length() - (1 + i)))
        {
            result = false;
            break;
        }
    }
    return result;
}

int main()
{
    string input;

    cin >> input;

    double mid = ceil((double)input.length() / 2);

    for (size_t i = 0; i < mid; i++)
    {
        int reversed_index = input.length() - (1 + i);
        if (input[i] == '?')
        {
            input[i] = input.at(reversed_index) == '?' ? 'a' : input.at(reversed_index);
        }
        if (input.at(reversed_index) == '?')
        {
            input[reversed_index] = input.at(i) == '?' ? 'a' : input.at(i);
        }
    }

    if (checkPalindrome(input))
    {
        std::cout << input << '\n';
    }
    else
    {
        std::cout << "-1" << '\n';
    }

    return 0;
}