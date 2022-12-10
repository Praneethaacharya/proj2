#include <iostream>
using namespace std;

int main()
{
    string str = "hello good morning";
    int count[26] = {0};
    int c = 0;
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            cout << (char)(i + 'a') << " " << count[i] << endl;
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (!isspace(str[i]))
        {
            c++;
        }
    }
    cout << c << endl;
    cout << str.length();
    return 0;
}