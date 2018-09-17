void helper(vector<string> vec,string res,string a)
{
    
    if(a.length()==0)
    {
        cout<<res<<" ";
        vec.push_back(res);
        return ;
    }
    char c=a[0];
    string use;
    if(c=='1')
    use=use+"1";
    if(c=='0')
    use=use+"0";
    if(c=='2')
    {
        use=use+"abc";
    }
    if(c=='3')
    {
        use=use+"def";
    }
    if(c=='4')
    {
        use=use+"ghi";
    }
    if(c=='5')
    {
        use=use+"jkl";
    }
    if(c=='6')
    {
        use=use+"mno";
    }
    if(c=='7')
    {
        use=use+"pqrs";
    }if(c=='8')
    {
        use=use+"tuv";
    }
    if(c=='9')
    {
        use=use+"wxyz";
    }
    
    if(use.length()==3)
    {
        res=res+use[0];
        helper(vec,res,a.substr(1));
        res.pop_back();
        res=res+use[1];
         helper(vec,res,a.substr(1));
          res.pop_back();
        res=res+use[2];
         helper(vec,res,a.substr(1));
    }
     else if(use.length()==4)
    {
        res=res+use[0];
        helper(vec,res,a.substr(1));
        res.pop_back();
        res=res+use[1];
         helper(vec,res,a.substr(1));
          res.pop_back();
        res=res+use[2];
        helper(vec,res,a.substr(1));
         res.pop_back();
         res=res+use[3];
         helper(vec,res,a.substr(1));
    }
    else
    {
        res=res+use[0];
        helper(vec,res,a.substr(1));
    }
    return ;   
}
vector<string> Solution::letterCombinations(string A) {
    
    vector<string> ans;
    
    if(A.length()==0)
    return ans;
    string res="";
    int n=A.length();
    helper(ans,res,A);
   return ans;
        
}
