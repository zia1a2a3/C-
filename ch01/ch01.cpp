#include"ch01.h"

int main(){
    int a,b;
    cout << "a=" << endl;
    cin >> a ;
    cout << "b=" <<endl;
    cin >> b ;
    swap(a,b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}