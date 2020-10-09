#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &vec) {
	reverse(vec.begin(), vec.end());
	vector<int> ans;
	int carry = 1;
	for(int i=0;i<vec.size();i++) {
		int sum = carry + vec[i];
		ans.push_back(sum % 10);
		carry = sum / 10;
	}
	while(carry) {
		ans.push_back(carry % 10);
		carry = carry/10;
	}
	while(ans[ans.size() -1] == 0  && ans.size() > 1) {
		ans.pop_back();
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

int main() {
	vector<int> vec;
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
		int val;
		cin>>val;
		vec.push_back(val);
	}
	vector<int> ans = plusOne(vec);
	for(int i=0;i<ans.size();i++) {
		cout<<ans[i]<<" ";
	}
	return 0;
}
