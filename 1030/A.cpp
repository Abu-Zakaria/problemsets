#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    bool isHard = false;
    for (size_t i = 0; i < n; i++)
    {
        int t;
        std::cin >> t;
        if (t == 1)
        {
            isHard = true;
            break;
        }
    }
    if (isHard)
    {
        std::cout << "HARD";
    }
    else
    {
        std::cout << "EASY";
    }
}