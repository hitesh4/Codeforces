#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> vec(n,0);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	int cost = 0;
	bool flag = false;
	int i = 0;
	while(i<n){
		if(vec[i]==1){
			// if(flag){
			// 	cost++;
			// 	i++;
			// }else{
				cost++;
				i++;
				flag = true;
			// }
		}else{
			if(flag){
				cost++;
			}
			flag = false;
			i++;
		}
	}
	if(vec[vec.size()-1]==0 && cost>0){
		cost--;
	}
	cout << cost << endl;
	return 0;
}