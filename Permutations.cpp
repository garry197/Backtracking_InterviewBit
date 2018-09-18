void helper(vector<vector<int> > &ans,vector<int> &use,vector<int> &A,int *arr)
{
    if(A.size()==use.size())
    {
        ans.push_back(use);
        return;
    }
    for(int i=0;i<A.size();i++)
    {
        int flag=0;
        if(arr[i]==0)
       { 
           flag=1;
           arr[i]=1;
           use.push_back(A[i]);
        helper(ans,use,A,arr);
         }
       if(flag==1)
       {
           use.pop_back();
           arr[i]=0;
       }
        
    }
}
vector<vector<int> > Solution::permute(vector<int> &A) {
vector<vector<int> > ans;
vector<int> use;
int *arr=new int[A.size()];

for(int i=0;i<A.size();i++)
{
    arr[i]=0;
}
helper(ans,use,A,arr);
return ans;
    
}
