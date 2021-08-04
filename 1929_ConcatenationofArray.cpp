#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> getConcatenation(vector<int>& nums) {
		 int n = nums.size();
		 vector<int> ans(2*n,0);
		 for(int i=0;i<n;i++)
		 {
			 ans[i] = nums[i];
			 ans[i+n] = nums[i];
		 }
		 return ans;
		}
};

int main()
{
	Solution sol;
	vector<int> nums;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		nums.push_back(temp);
	}

	vector<int> ans = sol.getConcatenation(nums);
	for(int i:ans)
	{
	cout<<i<<" ";
	}
	return 0;
	}
