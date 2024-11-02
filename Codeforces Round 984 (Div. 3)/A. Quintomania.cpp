#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[100];
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool found = true;
        for (int i = 0; i < n - 1; i++) {
            int diff =abs( arr[i + 1] - arr[i]);
            if (diff != 5 && diff != 7) {
                found = false;
                break;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

