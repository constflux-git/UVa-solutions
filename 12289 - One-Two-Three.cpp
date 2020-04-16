#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, counter = 0;
    cin >> N;
    string str;
    while (N--)
    {
        cin >> str;
        if (str.length() == 3)
        {
            if (str[0] == 'o')
                counter++;
            if (str[1] == 'n')
                counter++;
            if (str[2] == 'e')
                counter++;

            if (counter >= 2)
                cout << "1"
                     << "\n";
            else
                cout << "2"
                     << "\n";

            counter = 0;
        }
        else
            cout << "3";
    }

    return 0;
}
