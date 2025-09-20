// To find the smallest number in the array;
#include<iostream>
#include<climits>
using namespace std;

int main() {
    int smallest = INT_MAX;
    int nums[] = {5, 15, 22, 1, -15, 24};

    for(int i=0; i<sizeof(nums)/ sizeof(int); i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
    }

    cout<<"Smallest of nums is : "<< smallest<< endl;


    return 0;
}