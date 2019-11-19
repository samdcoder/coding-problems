#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n; 
		cin>>n; 
		int root = sqrt(n);
		bool prime = true;
		for(int i = 2; i <= root; i++){
			if(n % i == 0){
				prime = false;
				break;
			}
		}
		if(prime)
			cout<<"Prime"<<endl;
		else
			cout<<"Non Prime"<<endl;
	}

	return 0;
}