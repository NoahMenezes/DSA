#include<iostream>
#include<vector>
#include<algorithm>   // for sort

using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist) {  // O(N)
    int cows = 1, lastStallPos = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] - lastStallPos >= minAllowedDist) {
            cows++;
            lastStallPos = arr[i];
        }
        if (cows == C) {
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int C) {
    sort(arr.begin(), arr.end());  // N log N
    int st = 1, end = arr[N - 1] - arr[0], ans = -1;

    while (st <= end) {   // O(log(range) * N)
        int mid = st + (end - st) / 2;

        if (isPossible(arr, N, C, mid)) {  // cows can be placed
            ans = mid;       // store possible answer
            st = mid + 1;    // try for bigger distance
        } else {
            end = mid - 1;   // try smaller distance
        }
    }
    return ans;   // ✅ missing in your code
}

int main(void) {
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};
    cout << getDistance(arr, N, C) << endl; 
    return 0;
}
