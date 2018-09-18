bool helper1(string a)
{
    string q(a);
    reverse(a.begin(),a.end());
    if(q==a)
    return true;
    return false;
    
}

void helper(vector<vector<string>> &ans, string a,vector<string> &work)
{
    if(a.length()==0)
    {
        ans.push_back(work);
        return;
    }
    
    
    string cool;
    for(int i=0;i<a.size();i++)
    {
        cool=cool+a[i];
        int flag=0;
        if(helper1(cool))
        {
            flag=1;
            work.push_back(cool);
            helper(ans,a.substr(i+1),work);
        }
        if(flag==1)
        work.pop_back();
        
    }  
    
}
vector<vector<string> > Solution::partition(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<string>> ans;
    vector<string> z;
    
    helper(ans,A,z);
    return ans;
    
    
    
    
    
}
