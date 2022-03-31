#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for (auto &ch : str)
    {
        if (ch == '-')
            ch = '\n';
    }
    for (int i = 1; i < str.size(); i++)
        cout << str[i];
    return 0;
}