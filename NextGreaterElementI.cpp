#include<bits/stdc++.h>
using namespace std;

/*
 * the problem statement can be found in https://leetcode.com/problems/next-greater-element-i/
 */
//paste the class solution in the editor box in leet code

class Solution {
public:
	//this is going to be solved using a stack with the simple algorithm
	//
	//we iterate throw the array and we always push the current element into the stack
	//before we push if we have to make sure that there is only bigger elements in the stack
	//because if there is a smaller element we already found the next greater element of that smaller 
	//element and we just need to 
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
	    vector<int> ans((int)nums1.size(),-1);
	    unordered_map<int,int> ump;
	    stack<int> st;
	    for(int i=0;i<(int)nums2.size();i++)
	    {
		    while(!st.empty() && nums2[st.top()] < nums2[i])
		    {
			    ump[nums2[st.top()]] = nums2[i];
			    st.pop();
		    }
		    st.push(i);
	    }
	    for(int i=0;i<(int)nums1.size() ; i++)
	    {
		    if(ump[nums1[i]])
		    {
			    ans[i]=ump[nums1[i]];
		    }
	    }	    
	    return ans;	    
    }
};



int main()
{
	int n,m,temp;
	vector<int> vec1,vec2;
	cin>>n>>m;
	while(n--)
	{
		cin>>temp;
		vec1.push_back(temp);
	}
	while(m--)
	{
		cin>>temp;
		vec2.push_back(temp);
	}
	Solution sol;
	vector<int> ans = sol.nextGreaterElement(vec1,vec2);
	for(auto a:ans)
	{
		cout<<a<<" ";
	}
	cout<<endl;
}
