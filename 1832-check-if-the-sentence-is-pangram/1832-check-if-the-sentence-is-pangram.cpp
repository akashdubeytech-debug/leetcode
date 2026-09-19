class Solution {
public:
void tolower(char &s)
{
    s=s-'A'+'a';
}
    bool checkIfPangram(string sentence) {
        vector<char>ans(26,0);
        for(char ch:sentence)
        {
            if(ch>=65 && ch<=90)
            {
                tolower(ch);
            }
            if(ch>=97 && ch<=122)
            {
                int index=ch-'a';
                ans[index]=1;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(ans[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};