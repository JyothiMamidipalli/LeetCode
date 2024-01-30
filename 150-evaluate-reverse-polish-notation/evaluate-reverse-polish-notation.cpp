class Solution {
public:
    bool isOperator(string jyo)
    {
        if(jyo=="+" or jyo=="-" or jyo=="*" or jyo=="/")
        {
            return true;
        }
        return false;
    }
    int computeInteger(string s)
    {
        int val=0;
        if(s[0]=='-')
        {
            for(int i=1;i<s.length();i++)
            {
                val=(val*10)+(s[i]-'0');
            }
            return 0-val;
        }
        else
        {
            for(int i=0;i<s.length();i++)
            {
                val=(val*10)+(s[i]-'0');
            }
            return val;
        }
    }
    int checkValue(int a,int b,string ch)
    {
        if(ch=="+") return a+b;
        else if(ch=="-") return a-b;
        else if(ch=="*") return a*b;
        else return a/b;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>raj;
        for(auto it:tokens)
        {
            if(isOperator(it))
            {
                int a,b;
                b=raj.top();
                raj.pop();
                a=raj.top();
                raj.pop(); 
                int c=checkValue(a,b,it);
                raj.push(c);
            }
            else
            {
                int val=computeInteger(it);
                raj.push(val);
            }
        }
        return raj.top();
    }
};