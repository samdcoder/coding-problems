#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t; 
	int n; 
	while(t--){
		cin>>n;
		int root = sqrt(n);
		bool flag = true;
		for(int i = 2; i <= root; i++){
			if(n%i){
				flag = false;
				break;
			}
		}
		if(flag)
			cout<<"Prime"<<endl;
		else
			cout<<"Non Prime"<<endl;
	}
	return 0;
}