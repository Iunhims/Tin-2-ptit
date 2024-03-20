#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int minSteps(int N) {
    vector<int> dp(N + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= N; i++) {
        dp[i] = min(dp[i], dp[i - 1] + 1);
        if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
        int root = sqrt(i);
        if (root * root == i) dp[i] = min(dp[i], dp[root] + 1);
    }
    return dp[N];
}

int main() {
    int N;
    cin >> N;
    cout << minSteps(N) << endl;
    return 0;
}
