#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[10]={13,46,24,52,20,9};
	int n=6;
	for(int i=0; i<n-1; i++){
	    int minIndex=i;
	    for(int j=i+1; j<n; j++){
	        if(arr[j]<arr[minIndex]){
	            minIndex=j;
	        }
	    }
	    swap(arr[i],arr[minIndex]);
	    cout<<" "<<arr[i];
	}
    return 0;
}
