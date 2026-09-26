class Solution {
public:
    bool backspaceCompare(string s, string t) {
        if(s.empty()&&t.empty())return true;
        stack<char>st;
        stack<char>temp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(!st.empty())
                {
                st.pop();
                }
            }
            else{
            st.push(s[i]);
            }
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
            {
                if(!temp.empty())
                {
                    temp.pop();
                }
            }
            else {
            temp.push(t[i]);
            }
        }
        s.clear();
        t.clear();
        if(st.empty()&&temp.empty())return true;
        while(!st.empty())
        {
            s+=st.top();
            st.pop();
        }
        while(!temp.empty())
        {
            t+=temp.top();
            temp.pop();
        }
        if(s==t)return true;
        return false;
    }
};