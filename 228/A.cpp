#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int s1, s2, s3, s4;
    int nums[4];

    cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];

    vector<int> matched;
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = i + 1; j < 4; j++)
        {
            if (nums[i] == nums[j] &&
                !(find(matched.begin(), matched.end(), j) != matched.end()))
            {
                matched.push_back(j);
            }
        }
        if (matched.size() >= 3)
        {
            break;
        }
    }

    cout << matched.size();
}
