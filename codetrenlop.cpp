#include  <iostream>
#include <bits/stdc++.h>

using namespace std;
bool Chinhphuong(long long x){
	long long can = sqrt(x);
	return ( can*can ==x);
}
	
	long long Demsochinhphuong( long long L, long long R){
	
	
		
		
		long long XL, XR;
		XL = sqrt(L);
		if(XL*XL<L)
		XL++;
		XR= sqrt(R);
		 
		 return (XR-XL+1);
	}
		


int main (){
	int t;
	cin>>t;
	while (t--){
		long long L, R;
		cin>>L>>R;
		
		cout<<Demsochinhphuong(L, R)<<endl;
		
	}
}
