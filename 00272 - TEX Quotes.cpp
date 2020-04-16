#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    bool flag(true);
    string::iterator iter;

    while (getline(cin,str)) {
        for(iter = str.begin(); iter != str.end(); iter++) {
            if (*iter == '"') {
                if(flag) {
                    cout << "``";
                    flag = false;
                }
                else {
                    cout << "''";
                    flag = true;
                }
            }
            else cout << *iter;
        }
        cout << endl;
    }
}
