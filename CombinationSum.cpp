void helper(vector<vector<int> > &ans, vector<int > &v,vector<int> pass,int sum,int B)
{
    if(sum==B)
    {
        vector<int> o(v);
        sort(o.begin(),o.end());
        if(!binary_search(ans.begin(),ans.end(),o))
      {  
          ans.push_back(o);
          
      }
        return;
    }
    
    if(sum>B)
    return;
    for(int i=0;i<pass.size();i++)
    {
        v.push_back(pass[i]);
        sum=sum+pass[i];
        helper(ans,v,pass,sum,B);
        sum=sum-pass[i];
        v.pop_back();
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    
    vector<vector<int> > ans;
    vector<int> v;
    vector<int> q(A);
    sort(q.begin(),q.end());
    
    helper(ans,v,q,0,B);
    
   
    return ans;
}
