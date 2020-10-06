#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int t;
cin>>t;

while(t--)
{
long long int a, b;
        cin >> a >> b;
        if (a < 10 && b < 10) {
            cout << 1 << " " << 1 << endl;
        }
        else if (a < 10 && b >= 10) {
            cout << 0 << " " << 1 << endl;
        }
        else if (a >= 10 && b < 10) {
            cout << 1 << " " << 1 << endl;
        }
        else {
            long long int k, s;
            k = a / 9;
            if (a % 9 != 0) {
                k += 1;
            }
            s = b / 9;
            if (b % 9 != 0) {
                s += 1;
            }
            if (k < s) {
                cout << 0 << " " << k << endl;
            }
            else if (k == s) {
                cout << 1 << " " << s << endl;
            }
            else {
                cout << 1 << " " << s << endl;
            }
        }
}
}
