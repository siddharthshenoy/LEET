class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int> mp;
        unordered_map<char,int> mp1;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            mp1[t[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]!=mp1[s[i]])
                return false;
        }
        return true;
    }
};