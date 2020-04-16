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
        cout << str[0];
        long long int num;
        cin >> num;
        long long int res = ((((((num * 567) / 9) + 7492) * 235) / 47) - 498);
        cout << ((res / 10) % 10) << "\n"
             << res;
    }
}
