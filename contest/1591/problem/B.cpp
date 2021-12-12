#include <stdio.h>
#include <vector>

using namespace std;

unsigned int everse(vector<unsigned int> &numbers, unsigned int &last)
{
    vector<unsigned int> left;
    vector<unsigned int> right;
    for (size_t i = 0; i < numbers.size(); i++)
    {
        if (numbers.at(i) <= last)
        {
            left.push_back(numbers.at(i));
        }
        else
        {
            right.push_back(numbers.at(i));
        }
    }
    left.insert(left.end(), right.begin(), right.end());
    right.clear();
    if (left == numbers)
    {
        return 0;
    }
    return 1 + everse(left, left.back());
}

int main()
{
    unsigned int t;
    scanf("%u", &t);

    vector<unsigned int> result;

    for (size_t i = 0; i < t; i++)
    {
        unsigned int n;
        scanf("%u", &n);
        vector<unsigned int> numbers(n, 0);
        for (size_t j = 0; j < n; j++)
        {
            unsigned int number;
            scanf("%u", &number);
            numbers.push_back(number);
        }
        result.push_back(everse(numbers, numbers.back()));
    }
    for (size_t i = 0; i < result.size(); i++)
    {
        printf("%d\n", result.at(i));
    }
}