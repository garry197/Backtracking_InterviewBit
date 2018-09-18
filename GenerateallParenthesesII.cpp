void helper(vector<string> &ans,int & n,int start,int end,string s)
{
    if(end==n)
    {
        ans.push_back(s);
        return;
    }
    int i1=0,i2=0;
    if(start<n)
    {
        i1=1;
        s=s+'(';
        helper(ans,n,start+1,end,s);
        s.pop_back();
    }
    
    if(start>end)
    {
        s=s+')';
        helper(ans,n,start,end+1,s);
        s.pop_back();
    }
}
vector<string> Solution::generateParenthesis(int A) {
    vector<string>ans;
    string s;
    helper(ans,A,0,0,s);
    return ans;
}
