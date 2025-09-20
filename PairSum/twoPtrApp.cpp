#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    int startIdx = 0;
    int endIdx = nums.size() -1;
    vector<int> ans;

    while(startIdx < endIdx) {
        int sum = nums[startIdx] + nums[endIdx];

        if(sum == target) {
            ans.push_back(nums[startIdx]);
            ans.push_back(nums[endIdx]);
            return ans;
        }
        else if(sum > target) {
            endIdx --;
        }
        else if(sum < target) {
            startIdx ++ ;
        }
    }
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;
    vector<int> ans = pairSum(nums, target);
    cout<<"the pair is: "<< ans[0]<<","<<ans[1];
    return 0;
}