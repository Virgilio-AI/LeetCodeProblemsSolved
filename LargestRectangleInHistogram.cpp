#include<bits/stdc++.h>
using namespace std;


//paste code 

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
	    int n = heights.size();
	    int left[n]={-1},right[n]={n};
	    stack<int> st;
	    for(int i=0;i<n;i++)
	    {
		    while(!st.empty() && heights[st.top()] > heights[i])
		    {
			    right[st.top()]  = i;
			    st.pop();
		    }
		    st.push(i);
	    }
	    while(!st.empty())
	    {
		    st.pop();
	    }
	    for(int i=n-1;i>=0 ;i--)
	    {
		    while(!st.empty() && heights[st.top()] > heights[i])
		    {
			    left[st.top()] = i;
			    st.pop();
		    }
		    st.push(i);
	    }
	    while(!st.empty()) st.pop();
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
		    ans = max(heights[i]*(right[i]-left[i] -1),ans);
	    }
	    return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> vec;
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        vec.push_back(t);
    }
    cout<<sol.largestRectangleArea(vec)<<endl;
    return 0;
}
