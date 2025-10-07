#include<iostream>
#include<deque>
#include<vector>
using namespace std;
// You are given an array of integers nums, there is a sliding window of size k which is moviing from the very left of the array to the veru right. You can only see the k numbers in the windowo.Each time the sliding window moves right by one position.Return the max sliding window which basically contains the max element in each window
vector<int> max_window(vector<int> &arr, int k){
    deque<int> dq;
    vector<int> res;
    for(int i=0;i<k;i++){
        while(not dq.empty() and arr[dq.back()]<arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(arr[dq.front()]);
    for(int i=k;i<arr.size();i++){
        int curr=arr[i];
        if(dq.front()==(i-k)){
            dq.pop_front();
        }
        while(not dq.empty() and arr[dq.back()] <arr[i]){
            dq.pop_back();
        }   
        dq.push_back(i);
        res.push_back(arr[dq.front()]);
    }
    return res;
};
int main() {
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = max_window(arr, k);

    cout << "Max in each sliding window of size " << k << ": ";
    for(int num : result){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}