#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, w, h, l;
    cin >> N;
    int cntr = 1;

    while (N--)
    {
        cin >> w >> h >> l;
        cout << "Case " << cntr << ": ";
        if (w <= 20 && h <= 20 && l <= 20)
            cout << "good"
                 << "\n";
        else
            cout << "bad"
                 << "\n";
        cntr++;
    }

    return 0;
}
