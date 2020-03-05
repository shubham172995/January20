#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	vector<int> b(2);
	for(int i=0;i<n;i++)
		b[a[i]%2]++;
	if(b[1]%2)
		cout<<b[1]<<endl;
	else cout<<b[0]<<endl;
	return 0;
}