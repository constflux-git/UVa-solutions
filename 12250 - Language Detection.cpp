#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int flag = 1;

    while (str != "#")
    {

        cout << "Case " << flag << ": ";

        if (str == "HELLO")
            cout << "ENGLISH\n";
        else if (str == "HOLA")
            cout << "SPANISH\n";
        else if (str == "HALLO")
            cout << "GERMAN\n";
        else if (str == "BONJOUR")
            cout << "FRENCH\n";
        else if (str == "CIAO")
            cout << "ITALIAN\n";
        else if (str == "ZDRAVSTVUJTE")
            cout << "RUSSIAN\n";
        else
            cout << "UNKNOWN\n";

        flag++;

        cin >> str;
    }

    return 0;
}
