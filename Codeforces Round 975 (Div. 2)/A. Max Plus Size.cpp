#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

      
        int maxEven = 0, maxOdd = 0;
        int countEven = 0, countOdd = 0;

      
        for (int i = 0; i < n; i += 2) {
           
            maxEven = max(maxEven, a[i]);
            countEven++;
        }

        for (int i = 1; i < n; i += 2) {
          
            maxOdd = max(maxOdd, a[i]);
            countOdd++;
        }

       
        int scoreEven = maxEven + countEven;
        int scoreOdd = maxOdd + countOdd;

       
        cout << max(scoreEven, scoreOdd) << endl;
    }
    return 0;
}

