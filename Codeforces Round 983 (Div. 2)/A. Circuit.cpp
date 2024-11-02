#include <iostream>
using namespace std;

void solve()
{
    int numLights;
    cin >> numLights;

    int switchStates[2 * numLights];
    int numOff = 0, numOn = 0;

    for (int i = 0; i < 2 * numLights; i++)
    {
        cin >> switchStates[i];
    }

    for (int i = 0; i < 2 * numLights; ++i)
    {
        if (switchStates[i] == 0)
        {
            numOff++;
        }
        else
        {
            numOn++;
        }
    }

    if (numOff == 0)
    {
        cout << "0 0" << endl;
    }
    else
    {
        if (numOff >= numOn)
        {
            cout << (numOff % 2) << " " << numOn << endl;
        }
        else
        {
            cout << (numOn % 2) << " " << numOff << endl;
        }
    }
}

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        solve();
    }
    return 0;
}

