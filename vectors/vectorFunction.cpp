#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>vec = {1, 2, 3, 4, 5, 6, 7};
    cout<<"size = "<< vec.size()<<endl;
    vec.push_back(25);
    cout<<"After push back size = "<< vec.size()<<endl;
    vec.pop_back();
    cout<<"After pop back size = "<< vec.size()<<endl;
    cout<< "vector front : "<< vec.front() <<endl;
    cout<<"Vector Back : "<< vec.back()<< endl;
    cout<<"Vector at : "<< vec.at(3) <<endl;
    for(int val : vec) {
        cout<< vec[val] << endl;
    }
    return 0;
}