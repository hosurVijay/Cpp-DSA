#include<iostream>
#include<vector>
using namespace std;

void changeA(int &b) {
    b = 20;
}

int main() {
    int a = 10;

    cout<<"Inside main fnx: " << a << endl;
    changeA(a);

    cout<<"Inside main fnx: " << a << endl;
    return 0;
}