class Solution {
public:
    string addStrings(string num1, string num2) {
        int one=num1.size()-1,two=num2.size()-1;
        int carry=0;
        string ans;
        while(one>=0||two>=0||carry!=0)
        {
            int x=one>=0?num1[one]-'0':0;
            int y=two>=0?num2[two]-'0':0;
            int sum=x+y+carry;
            carry=sum/10;
            ans+=sum%10+'0';
            one--;
            two--;
        }
        int start=0,end=ans.size()-1;
        while(start<end)
        {
            swap(ans[start],ans[end]);
            start++;
            end--;
        }
        return ans;
    }
};