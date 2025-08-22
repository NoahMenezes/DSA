#include <iostream>
#include <vector>
// [2,0,2,1,1,0,1,2,0,0]->[0,0,0,0,1,1,1,2,2,2]
using namespace std;
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    { // O(n)
        int n = nums.size();
        int count0 = 0, count1 = 0, count2 = 0;

        // Count occurrences of 0, 1, and 2
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
                count0++;
            else if (nums[i] == 1)
                count1++;
            else
                count2++;
        }

        // Fill array in sorted order
        int idx = 0;
        for (int i = 0; i < count0; i++)
            nums[idx++] = 0;
        for (int i = 0; i < count1; i++)
            nums[idx++] = 1;
        for (int i = 0; i < count2; i++)
            nums[idx++] = 2;
    }
};

int main(void)
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n); // ✅ initialize vector with size n

    cout << "Enter the values of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution s;
    s.sortColors(arr);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
