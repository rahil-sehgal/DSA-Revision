#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input1.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output1.txt", "w", stdout);
#endif
	int t;
	cin>>t;;

	while(t--){
		int n;
		int p=0;
		int sum=0;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			if(a[i]>0){
				p++;
				sum+=a[i];
			}
		}
		std::vector<int> v;
		for(int i=1;i<=p;i++){
			if(a[i]<0){
				v.push_back(i);
			}
		}
		for(int i=p+1;i<=n;i++){
			if(a[i]>0){
				v.push_back(i);
			}
		}

		cout<<sum<<endl;
		cout<<v.size()<<" ";
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		



	}
	
	return 0;


	//output in this question will be sum in first line and k and i1, i2,i3 ,i4,etc in second line
}
