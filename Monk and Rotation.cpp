RESULT:  Accepted 
Score
20.0
Time (sec)
0.3719
Memory (KiB)
792
Language
C++17
------------------------------------------------

#include<bits/stdc++.h>

using namespace std;

int arr[100001];

int main(){
	int t,i,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;

		while(k>=n){
			k-=n;
		}

		for(i=0;i<n;i++){
			cin>>arr[i];
		}

	for(i=n-k;i<n;i++){
		cout<< arr[i] << " ";
	}
	for(i=0;i<n-k;i++){
		cout<< arr[i] << " ";
	}
	cout<<"\n";

	}
}
