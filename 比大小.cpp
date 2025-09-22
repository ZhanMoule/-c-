//
// Created by admin on 25-6-29.
//
#include <iostream>
using namespace std;
int max(int a,int b) {
    int c;
    c=a>b?a:b;
    return c;

}
int main() {
    cout << "pleaas enter two words" << endl;
    int a,b;
    cin >> a >> b;
    cout << "the max is" << max(a,b) << endl;
    return 0;
}