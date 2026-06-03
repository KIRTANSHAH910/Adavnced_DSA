#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 36;
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++;
        }
    }
    if(count == 2) {
        cout << "Prime Number";
    }
    else {
        cout << "Not Prime Number";
    }
    return 0;
}