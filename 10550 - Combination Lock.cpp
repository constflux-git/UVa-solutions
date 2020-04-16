#include <bits/stdc++.h>

using namespace std;

int main()
{
    int init, frst, scnd, thrd;
    cin >> init >> frst >> scnd >> thrd;

    while (init || frst || scnd || thrd)
    {
        cout << (1080 + ((abs((frst - init) - 40) % 40) + (abs((frst - scnd) - 40) % 40) + (abs((thrd - scnd) - 40) % 40)) * 9) << endl;

        cin >> init >> frst >> scnd >> thrd;
    }

    return 0;
}
