
void helper(vector<vector<int> > &ans, vector<int > &v,vector<int> pass,int sum,int B,int i)
{
    if(sum==B)
    {
        if(!binary_search(ans.begin(),ans.end(),v))
      {  
          ans.push_back(v);
          
      }
        return;
    }
    
    if(sum>B)
    return;
    for(;i<pass.size();i++)
    {
        v.push_back(pass[i]);
        sum=sum+pass[i];
        helper(ans,v,pass,sum,B,i+1);
        sum=sum-pass[i];
        v.pop_back();
    }
}vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
vector<vector<int> > ans;
    vector<int> v;
    vector<int> q(A);
    sort(q.begin(),q.end());
    
    helper(ans,v,q,0,B,0);
    
    sort(ans.begin(),ans.end());
    return ans;
    
    
    
    
}
