#include<bits/stdc++.h>
using namespace std;
 int main(){
int n;
cin >>n;
vector<int> nums(n);
for(int i=0;i<n;i++){
cin >> nums[i];
}
vector<int> ans;
for(int i =0;i<n;i++){
ans[i] = nums[nums[i]];

cout << ans[i] << " ";
}
}

