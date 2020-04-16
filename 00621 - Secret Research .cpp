#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string str;
        cin >> str;
        if (str == "1" || str == "4" || str == "78")
            cout << "+\n";
        else if (*(str.end() - 2) == '3' && *(str.end() - 1) == '5')
            cout << "-\n";
        else if (str[0] == '9' && *(str.end() - 1) == '4')
            cout << "*\n";
        else if (str[2] == '0' && str[1] == '9' && str[0] == '1')
            cout << "?\n";
    }

    return 0;
}
