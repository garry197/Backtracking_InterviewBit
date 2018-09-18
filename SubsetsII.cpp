void helper(vector<vector<int> > &ans, vector<int > &v,vector<int> pass,int i)
{
    
        if(!binary_search(ans.begin(),ans.end(),v))
      {  
          ans.push_back(v);
          
      }for(;i<pass.size();i++)
    {
        v.push_back(pass[i]);
        
        helper(ans,v,pass,i+1);
       
        v.pop_back();
    }return;
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    
    
    vector<vector<int> > ans;
    vector<int> v;
    vector<int> q(A);
    sort(q.begin(),q.end());
    
    helper(ans,v,q,0);
     return ans;
}
