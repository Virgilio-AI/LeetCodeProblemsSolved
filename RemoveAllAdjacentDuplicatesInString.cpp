#include<bits/stdc++.h>
using namespace std;
/*
the problem statement can be found here
https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
*/

class Solution {
public:
    string removeDuplicates(string S) {
	    string st;
	    for(auto a:S)
	    {
		    if(!st.empty() &&  st.back() == a ) st.pop_back();
		    else 
		    {
			    st.push_back(a);
		    }

	    }
	    return st;
    }
};



int main()
{
	Solution sol;
	string str;
	cin>>str;	
	cout<<sol.removeDuplicates(str)<<endl;
    return 0;
}
