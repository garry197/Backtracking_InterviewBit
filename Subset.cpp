void helper(vector<vector<int> > &ans,vector<int> &v,vector<int> A,int i)
{
    if(!binary_search(ans.begin(),ans.end(),v))
    {
        ans.push_back(v);
    }
    
    for(;i<A.size();i++)
    {
        v.push_back(A[i]);
        helper(ans,v,A,i+1);
        v.pop_back();
        
    }
    
    
    return ;
    
}



vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int> > ans;
    
    sort(A.begin(),A.end());
    vector<int> v;
    helper(ans,v,A,0);
    
    return ans;
    
    
}
