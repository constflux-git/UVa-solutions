#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N;
    cin >> N;
    int W, H;
    while (N--)
    {
        cin >> W >> H;
        cout << (W / 3) * (H / 3) << endl;
    }

    return 0;
}

stringstream ss;
ss << res;
string str = ss.str();
cout << str[str.size() - 2] << "\n";
