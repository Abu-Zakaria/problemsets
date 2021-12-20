#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;

    char temp;
    int temp_count = 0;
    bool danger = false;
    for (size_t i = 0; i < input.length(); i++)
    {
        if (temp == input.at(i))
        {
            temp_count++;
        }
        else
        {
            temp_count = 0;
        }
        if (temp_count >= 6)
        {
            danger = true;
            break;
        }
        temp = input.at(i);
    }
    cout << (danger ? "YES" : "NO");
}