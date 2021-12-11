#include <iostream>
#include <string>

int main()
{
    int n;
    std::string s;
    std::cin >> n >> s;
    int anton = 0,
        danik = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (s.at(i) == 'A')
        {
            anton++;
        }
        else if (s.at(i) == 'D')
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        std::cout << "Anton";
    }
    else if (anton < danik)
    {
        std::cout << "Danik";
    }
    else
    {
        std::cout << "Friendship";
    }
}