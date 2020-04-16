#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, temp;
    cin >> N;
    cout << "Lumberjacks:\n";

    while (N--)
    {
        int arr[10];
        bool flag = true;
        for (int i = 0; i < 10; i++)
            cin >> arr[i];
        if (arr[0] > arr[1])
        {
            temp = arr[1];
            for (int j = 2; j < 10; j++)
            {
                if (arr[j] < temp)
                {
                    temp = arr[j];
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
                cout << "Ordered\n";
            else
                cout << "Unordered\n";
        }

        else if (arr[0] < arr[1])
        {
            temp = arr[1];
            for (int j = 2; j < 10; j++)
            {
                if (arr[j] > temp)
                {
                    temp = arr[j];
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
                cout << "Ordered\n";
            else
                cout << "Unordered\n";
        }
    }

    return 0;
}
