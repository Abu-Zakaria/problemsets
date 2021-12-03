#include <iostream>
#include <string>

int main()
{
    const char *for_boys = "IGNORE HIM!";
    const char *for_girls = "CHAT WITH HER!";
    std::string name;
    std::cin >> name;

    std::string temp;

    for (size_t i = 0; i < name.length(); i++)
    {
        if (temp.find(name[i]) == std::string::npos)
        {
            temp.push_back(name[i]);
        }
    }

    if (temp.length() % 2 == 0)
    {
        std::cout << for_girls << '\n';
    }
    else
    {
        std::cout << for_boys << '\n';
    }

    return 0;
}