#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool flag = true;
		for(int i =2 ;i <= n/2; i++){
			if(n%i == 0){
				flag = false;
				break;
			}
		}
		if(flag){
			cout<<"Prime"<<endl;

		}
		else{
			cout<<"Non Prime"<<endl;
		}
	}
	return 0;
}