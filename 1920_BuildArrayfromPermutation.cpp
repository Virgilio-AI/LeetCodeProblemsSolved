#include<bits/stdc++.h>
using namespace std;
class Solution {

	public:

		vector<int> buildArray(vector<int>& nums) {
			vector<int> ans(nums.size(),0);
			for(int i=0;i<nums.size();i++)
			{
				ans[i] = nums[nums[i]];
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
	vector<int> ans = sol.buildArray(nums);
	for(int i: ans)
	{
		cout<<i<<" ";
	}

	return 0;
}

