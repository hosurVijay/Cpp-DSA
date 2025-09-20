#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout<<*arr<<endl;

    int a = 15, b = 10;
    int * ptr = &a;
    cout<<&ptr<<endl<<*ptr<<endl;
    ptr = &b;
    cout<<&ptr<<endl<<*ptr<<endl;
    return 0;
}