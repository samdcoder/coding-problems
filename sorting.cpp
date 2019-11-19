#include <iostream>

using namespace std;


int main(){
	int n;
	cin>>n;
	int a[n];
	int ans = n;
	int cmp = n;

	for(int i = 0; i < n; i++){
		cin>>a[i];
	}

	for(int i = n - 1; i >= 0; i--){
		if(a[i] == cmp){
			cmp--;
			ans--;
		}
	}

	if(n == 0){
		cout<<-1;
		return 0;
	}

	if(ans >= 0)
		cout<<ans;
	else
		cout<<-1;

	return 0;
}