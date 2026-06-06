//1. REVERSE THE NUMBER:

#include <iostream>
using namespace std;

int main() {

    int n = 12345;
    int temp = n;
    int count = 0;

    
    while(n > 0){
        n = n / 10;
        count = count + 1;
    }

    cout << count << endl;

    int arr[10];

    n = temp;

    for(int i = 0; i < count; i++){



        
        arr[i] = n % 10;
        n = n / 10;
        cout << arr[i] << " ";
    }

    return 0;
}



