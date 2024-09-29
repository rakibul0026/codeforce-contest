
#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin >> t; 
    while (t--) {
        long long n, k;
        cin >> n >> k; 
 
        long long operations = 0;
 
        
        if (k == 1) {
            operations = n; 
        } else {
           
            while (n > 0) {
                operations += n % k; 
                n /= k;
            }
        }
 
        cout << operations << '\n'; 
    }
 
    return 0;
}
