#include<bits/stdc++.h>

using namespace std;


long long TimM (long long n){
	long long m    = 0;
	long long Dem5 = 0;
	
	while(Dem5 < n){
		m++;
		
	long long temp ;
	while (temp % 5 == 0){
		temp /=5;
		Dem5++;
    	}
	}
	return m;
}


int main(){
	int t;
	cin<<t;
	while(t--){
		long long n;
		cin>>n;
		
		cout<< TimM(n)<<endl;
	}
	return 0;
}
