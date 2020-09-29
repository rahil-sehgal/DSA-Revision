#include <bits/stdc++.h>
#include<math.h>
#include<iostream>
#include <algorithm>
 
typedef long long ll;
using namespace std;
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
 
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
 
	ll count=0,length=0;
	ll p;
	
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){ //condition for greater 
			count++;		
			p=i+1;
			while(a[i]>a[i+1] && i<n-1){
			length++;
			i++;
			}
		}
	}
	
	if(length==n-1){
		cout<<"yes"<<endl;
		cout<<1<<" "<<n;
	}
 
	else if(count==1 && a[p-1]<a[p+length] && ((p-2>=0)?(a[p+length-1]>a[p-2]):1)){
		cout<<"yes"<<endl;
		cout<<p<<" "<<p+length;
 
	}
	else if(count==0){
		cout<<"yes"<<endl;
		cout<<1<<" "<<1;
 
	}
	else cout<<"no"<<endl;
 
	return 0;
}
