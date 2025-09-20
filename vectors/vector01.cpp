#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3};
    vector<int> vect(10,2);
    for(int i : vect) {
        cout<< i << endl;
    }
    // cout<<vect[3]<<endl;
    return 0;

}