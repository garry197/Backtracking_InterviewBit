bool checkrow(vector<vector<char> > &A,int row,int col,int num)
{
    char y=num+'0';
    for(int i=0;i<9;i++)
   { 
       
       
       if(A[row][i]==y)
    return true;
       
   }
    return false;
}

bool checkcol(vector<vector<char> > &A,int row,int col,int num)
{
    char u=num+'0';
    for(int i=0;i<9;i++)
    {
        
        if(A[i][col]==u)
    return true;
        
    }
    return false;
}
bool checkbox(vector<vector<char> > &A,int irow,int icol,int num)
{
    int a=irow%3;
    int b=icol%3;
    irow=irow-a;
    icol=icol-b;
   for (int row = 0; row < 3; row++) 
        for (int col = 0; col < 3; col++) 
            if (A[row+irow][col+icol] == num+'0') 
                return true; 
    return false; 
}


bool check(vector<vector<char> > &A,int row,int col,int num)
{
    if((!checkrow(A,row,col,num))&&(!checkcol(A,row,col,num))&&(!checkbox(A,row,col,num)))
    return true;
    
    return false;
    
}
    
bool find(vector<vector<char> > &A,int &row,int &col)
{
    for(row=0;row<9;row++)
    {
        for(col=0;col<9;col++)
        {
            if(A[row][col]=='.')
            return true;
        }
    }
    return false;
}




bool helper(vector<vector<char> > &A)
{
    int row,col;
    if(!find(A,row,col))
    return true ;
    
   
                for(int q=1;q<10;q++)
                {
                    if(check(A,row,col,q))
                    {
                        // cout<<row<<col<<q<<" next";
                        char c=q+'0';
                        //cout<<c<<endl;
                         
                        A[row][col]=c;
                        bool p=helper(A);
                       if(p==true)
                       return true;
                        A[row][col]='.';
                    }
                   
                }
                return false;
                
            
}




void Solution::solveSudoku(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


int i=10;
helper(A);
    
    
    
    
    
    
    
    
    
}
