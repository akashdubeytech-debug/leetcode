class Solution {
public:
    string sortSentence(string s) {
        string temp="";
        vector<string>ans(10);
        int index=0,count=0;
        for(char ch:s)
        {
            if(ch==' ')
            {
                index=temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[index]=temp;
                temp.clear();
                count++;
            }
            else
            {
                temp+=ch;
            }
        }
        index=temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[index]=temp;
        temp.clear();
        count++;
        for(int i=1;i<=count;i++)
        {
            temp+=ans[i];
            temp+=' ';
        }
        temp.pop_back();
        return temp;
    }
};