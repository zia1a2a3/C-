#include<iostream>
using namespace std;

int main(){
    int *p;//p意味着point，指针的意思
    int a =10;
    p = &a;//p指向a的地址
    cout << "a的地址是" << &a <<endl;
    cout << "a的地址是" << (int)*&a << endl;
    cout << "a的地址是" << p <<endl;
    cout << "a的地址是" << (int)*p <<endl;//让输出的地址变为十进制
    cout << "a =" << a <<endl;
    *p = 1000;//*p表示去寻找p这个地址上存放的数据（即a），*p的修改等于对a的修改
    cout << "a =" << a <<endl;

    return 0;
}