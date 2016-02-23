class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int cha[256];
        int count = 0,max = 0;
        memset(cha,-1,sizeof(cha));
        for(int i=0;i<s.size();i++)
        {
            if(cha[s[i]] == -1)
            {
                cha[s[i]] = i;
                count++;
            }
            else
            {
                if(count > max) max = count;
                i = cha[s[i]];
                memset(cha,-1,sizeof(cha));
                count = 0;
            }
        }
        if(count > max) max = count;
        return max;
    }
};