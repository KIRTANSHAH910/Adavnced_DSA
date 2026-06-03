#include <iostream>
using namespace std;

int main() {
    int n = 12;
    int m = 12;
    int h = 1;

    if(n > m) {
        for(int i = 1; i <= m; i++) {
          if(n % i == 0 && m % i == 0) {
                h = i;
            }}}
    else {
        for(int i = 1; i <= n; i++) {
          if(n % i == 0 && m % i == 0) {
                h = i;
            }} }
    cout << "GCD = " << h;
    return 0;
}