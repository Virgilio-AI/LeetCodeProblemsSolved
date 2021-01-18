#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		int calPoints(vector<string>& ops)
		{
			stack<int> st;
			for(auto a:ops)
			{
				if(a=="D")
				{
					st.push(st.top()*2);
				}
				else if(a=="C")
				{
					st.pop();
				}
				else if(a=="+")
				{
					int n1 = st.top();
					st.pop();
					int n2 = st.top();
					int n3 = n2 + n1;
					st.push(n1);
					st.push(n3);
				}
				else 
				{
					int nk=stoi(a);
					st.push(nk);
				}
			}
			int sum=0;
			while(!st.empty())
			{
				sum+=st.top();
				st.pop();
			}
			return sum;
		}
};
int main()
{
	vector<string> vec;
	int n;
	cin>>n;
	while(n--)
	{
		string temp;
		cin>>temp;
		vec.push_back(temp);
	} 
	Solution sol;
	cout<<sol.calPoints(vec);
}

