#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int t = 0;
    t = a;
    a = b;
    b = t;
    cout << a << endl;
    cout << b << endl;
    return ;
}