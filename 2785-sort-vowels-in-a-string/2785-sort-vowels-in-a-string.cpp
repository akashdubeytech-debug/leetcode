class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(char &ch:s)
        {
            if(ch=='a'||ch=='e'||ch=='i'|| ch=='o'||ch=='u')
            {
                int index=ch-'a';
                lower[index]++;
                ch='#';
            }
            else if(ch=='A'||ch=='E'||ch=='I'|| ch=='O'||ch=='U')
            {
                int index=ch-'A';
                upper[index]++;
                ch='#';
            }
        }
        string ans;
        for(int i=0;i<26;i++)
        {
            char c='A'+i;
            while(upper[i])
            {
                ans+=c;
                upper[i]--;
            }
        }
         for(int i=0;i<26;i++)
        {
            char c='a'+i;
            while(lower[i])
            {
                ans+=c;
                lower[i]--;
            }
        }
        if(ans.empty())return s;
        int start=0;
        int end=0;
        while(end<ans.size()&& start<s.size())
        {
            if(s[start]=='#')
            {
                swap(s[start],ans[end]);
                end++;
            }
            start++;
        }
        return s;
    }
};