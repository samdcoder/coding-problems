#include <bits/stdc++.h>

using namespace std;

void myFunction(vector<int>& A, int K){
	vector<int> k_array;
    int temp = K;
    //cout<<temp<<endl;
    while(temp){
        int num = temp%10;
        temp = temp / 10;
        k_array.push_back(num);
    }
    reverse(k_array.begin(), k_array.end());
    vector<int> ans;

    int index_k = k_array.size() - 1;
    int index_a = A.size() - 1;
    int carry = 0;
    while(index_a >= 0 && index_k >= 0){
    	int temp_sum = k_array[index_k] + A[index_a] + carry;
    	if(temp_sum < 10){
    		carry = 0;
    		ans.push_back(temp_sum);
    	}
    	else{
    		int insert_val = temp_sum % 10;
    		ans.push_back(insert_val);
    		carry = 1;
    	}
    	index_k--;
    	index_a--;
    }

    int new_index = -1;
    bool flag;
    if(index_k >= 0){
    	new_index = index_k;
    	flag = false;
    }
    else if(index_a >= 0){
    	new_index = index_a;
    	flag = true;
    }
    //did not go here 
    while(new_index >= 0){
    	int tmp;
    	if(flag){
    		tmp = A[new_index] + carry;
    		//use A array
    		if(tmp >= 10){
    			ans.push_back(tmp % 10);
    			carry = 1;
    		}
    		else{
    			ans.push_back(tmp);
    			carry = 0;
    		}
    	}
 		else{
 			tmp = k_array[new_index] + carry; 
 			//user k_array
 			if(tmp >= 10){
    			ans.push_back(tmp % 10);
    			carry = 1;
    		}
    		else{
    			carry = 0;
    			ans.push_back(tmp);
    		}
 		}
    	new_index--;
    }
    if(carry){
    	ans.push_back(1);
    }
    reverse(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++){
    	cout<<ans[i]<<" ";
    }
    //return ans;

}
int main(){
	vector<int> vect; 
	// for(int i = 1; i <= 10; i++){
	// 	vect.push_back(9);
	// }
	vect.push_back(6); 
	myFunction(vect, 809);

	return 0;
}