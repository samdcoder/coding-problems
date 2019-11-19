#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i = 1; i <= t; i++){
		int n;
		cin>>n;
		int temp = n;
		int sum = 0;
		//n = 12345 

		while(temp){
			cout<<"temp%10 => "<<temp%10<<endl;
			cout<<"temp/10 => "<<temp/10<<endl;
			sum += (temp%10);
			temp = temp /10;
		}

		cout<<sum<<endl;
	}
	return 0;
}