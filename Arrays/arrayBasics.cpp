#include<iostream>
using namespace std;

int main() {
    int marks[5] = {99, 55, 43, 35, 99};
    

    int price[] = {98, 99, 105, 30};
    marks[0] = 101;

    cout<< marks[6] << endl;
    // Loops on array
    // Loops: 0 to size-1;
    int size = sizeof(marks)/sizeof(int);
    cout<<"Size is : "<<sizeof(marks)/ sizeof(int);


    for (int i=0; i< size; i++) {
        cout<<marks[i]<<endl;

     
    }
}