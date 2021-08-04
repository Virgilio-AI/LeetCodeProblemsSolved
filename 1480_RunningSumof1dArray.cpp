#include<bits/stdc++.h>
using namespace std;

class Solution {

	public:

		vector<int> runningSum(vector<int>& nums) {
			vector<int> ans;
			int sum=0;
			for(int i : nums)
			{
				sum+=i;
				ans.push_back(sum);
			}
			return ans;
		}
};


int main()
{
	vector<int> sums;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		sums.push_back(temp);
	}

	Solution sol;
	vector<int> ans = sol.runningSum(sums);
	for(int i : ans)
	{
		cout<<i<<" ";
	}
	return 0 ;
}
