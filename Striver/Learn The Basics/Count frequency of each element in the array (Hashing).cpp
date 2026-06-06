#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cout<<"Enter the number of elements in an array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array element"<<endl;
	for(int i=0; i<n; i++){
    cin>>arr[i];
   // cout<<" "<<arr[i]<<endl;
	}
	int hash[13]={0};
	for(int i=0; i<n; i++){
	    hash[arr[i]] += 1;
	}
	
	int q;
	cout<<"Enter the number of elements to find"<<endl;
 	cin>>q;
//	cout<< " "<<q<<endl;
	while(q--){
	    	int number;
	    	cin>>number;
	    	cout<<" "<<hash[arr[number]];
	    
	}
	return 0;
}
