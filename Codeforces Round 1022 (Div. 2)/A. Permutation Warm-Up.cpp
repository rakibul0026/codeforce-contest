#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int k = n / 2;
        int d = k * (n - k) + 1;
        cout << d << endl;
    }

    return 0;
}
