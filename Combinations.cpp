
void helper(vector<vector<int> > &ans, vector<int > &v,vector<int> pass,int current,int B,int i)
{
    if(current==B)
    {
        ans.push_back(v);
        return;
    }
    
    
    for(;i<pass.size();i++)
    {
        v.push_back(pass[i]);
        
        helper(ans,v,pass,current+1,B,i+1);
        v.pop_back();
    }
}


vector<vector<int> > Solution::combine(int A, int B) {

    
    vector<vector<int> > ans;
    vector<int> v;
    vector<int>pass;
    for(int i=0;i<A;i++)
    {
        pass.push_back(i+1);
        
    }
    
    
    helper(ans,v,pass,0,B,0);
    return ans;
    
    
    
}
