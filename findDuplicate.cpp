#include<iostream>
using namespace std;
#include <unordered_map>


    int findDuplicate(vector<int>& nums) {
        int ans=0;
        unordered_map<int, int> mpp;
        for(auto x: nums){
            mpp[x]++;
        }
        for(auto it: mpp){
            if(it.second >= 2){
                ans = it.first;
                break;
            }
        }
        return ans;
    }

int main() {
    vector<int> nums = {2, 3, 3, 4}; // Initialize nums as a vector
    int result = findDuplicate(nums);
    cout << "Element that appears more than once: " << result << endl;
    return 0;
}