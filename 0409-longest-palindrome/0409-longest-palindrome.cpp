class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>fre;
        int length=0;bool tr=false;
        for(char ch:s)
        {
            fre[ch]++;
        }
        for(auto it:fre)
        {
            length+=(it.second/2)*2;
            if(it.second%2==1)
            {
                tr=true;
            }
        }
        if(tr)
        {
            length++;
        }
        return length;
    }
};