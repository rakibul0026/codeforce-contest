#include <iostream>
#include <vector>
using namespace std;

long long countBeautifulSubarrays(const vector<int>& A, int N) {
    long long beautiful_count = 0;
    int start = 0;

    while (start < N) {
        int end = start;
        while (end < N && A[end] == A[start]) {
            end++;
        }
        
        long long length = end - start;
        beautiful_count += (length * (length + 1)) / 2;

        start = end;
    }

    return beautiful_count;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        long long total_subarrays = (N * (N + 1LL)) / 2;
        long long beautiful_subarrays = countBeautifulSubarrays(A, N);
        long long non_beautiful_subarrays = total_subarrays - beautiful_subarrays;

        cout << "Case " << t << ": " << non_beautiful_subarrays << "\n";
    }

    return 0;
}

