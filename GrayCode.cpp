

void helper1(vector<int> &ans, int &num,int A)
{
    if(A==0)
    {
        //cout<<num<<" ";
        ans.push_back(num);
        return;
    }
    
    helper1(ans,num,A-1);
    
    num=num^(1<<(A-1));
    helper1(ans,num,A-1);
    
    
}
vector<int> Solution::grayCode(int A) {
    
    vector<int> ans;
  int num=0;
   
    helper1(ans,num,A);
    
    return ans;
    
    
}
