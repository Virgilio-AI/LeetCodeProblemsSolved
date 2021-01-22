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
	    int n = nums2.size();
	    int m = nums1.size();
	    vector<int> res(m,-1);
	    stack<int> st;
	    unordered_map<int,int> umap;
	    for(int i=0;i<n;i++)
	    {
		    int element = nums2[i];
		    while(!st.empty() && element > st.top())
		    {
			    umap[st.top()] = element;
			    st.pop();
		    }
		    st.push(element);
	    }
	    for(int i=0;i<m;i++)
	    {
		    int element = nums1[i];
		    if(umap.find(element) != umap.end())
		    {
			    res[i] = umap[element];
		    }

	    }
	    return res;
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
