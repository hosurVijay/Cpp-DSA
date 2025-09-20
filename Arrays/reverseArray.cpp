#include<iostream>
using namespace std;

int reverseArray(int arr[], int sz) {
    int startIdx = 0;
    int endIdx = sz-1;
        while(startIdx < endIdx) {
            swap(arr[startIdx], arr[endIdx]);
            startIdx++;
            endIdx--;
        }
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2 ,5};
    int sz = 7;
    reverseArray(arr, sz);
    for(int i=0; i<sz; i++) {
        cout<<arr[i]<<" ";;
    }
    return 0;
}