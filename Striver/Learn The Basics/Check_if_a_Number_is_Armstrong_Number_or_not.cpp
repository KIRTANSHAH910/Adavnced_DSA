
#include <iostream>
using namespace std;
int main() {
    
    int n=153;
    int temp = n;
    int count=0;
    int k;
    int m=0;
    int h;
    while(n>0){
        k= (n%10);

        h= k*k*k;
        m=m+h;
        n=n/10;
        cout << m <<endl;
    }
    if(m==temp){
        cout<<"True" << endl;
    }
    else{
        cout<<"False" <<endl;
    }
    
    return 0;
}

