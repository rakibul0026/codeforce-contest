#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    if (N / 100 == 7 || (N / 10) % 10 == 7 || N % 10 == 7)
    {

        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}

