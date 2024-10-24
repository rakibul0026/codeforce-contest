#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << (n % 2 == 0 ? "Sakurako" : "Kosuke") << endl;
    }

    return 0;
}

