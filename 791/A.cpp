#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> weights;
    std::string input;
    getline(std::cin, input);

    std::istringstream f(input);

    std::string s;
    while (getline(f, s, ' '))
    {
        weights.push_back(std::stoi(s));
    }

    int years = 0;

    while (weights[0] <= weights[1])
    {
        weights[0] *= 3;
        weights[1] *= 2;
        years++;
    }

    std::cout << years;

    return 0;
}