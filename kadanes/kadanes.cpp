#include<iostream>
#include<climits>
using namespace std;
int main() {
    int nums[5] = {-1, -2, -3, -4, -5};
    int currsum = 0;
    int maxSum = INT_MIN;
    for(int val: nums ) {
        currsum += val;
        maxSum = max(currsum, maxSum);

        if(currsum < 0) {
            currsum = 0;
        }
    }
    cout<<"max of the subArray is : "<< maxSum;
    return 0;
}