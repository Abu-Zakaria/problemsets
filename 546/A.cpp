#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main()
{
    std::vector<unsigned int> inputs;
    std::string input;

    getline(std::cin, input);

    std::stringstream stream(input);

    std::string token;
    while (getline(stream, token, ' '))
    {
        inputs.push_back(std::stoi(token));
    }
    unsigned int k, n, w;

    k = inputs[0]; // cost of first banana
    n = inputs[1]; // dollars the soldier has
    w = inputs[2]; // number of banana he wants

    unsigned int spent_money = 0;

    for (size_t i = 1; i <= w; i++)
    {
        spent_money += k * i;
    }
    unsigned int need_to_lend = 0;
    if (spent_money > n)
    {
        need_to_lend = spent_money - n;
    }
    std::cout << need_to_lend << '\n';

    return 0;
}