class Solution {
public:
bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m;
        for(int i = 0; i < magazine.size(); i++)
            m[magazine[i]]++;
        for(auto x : ransomNote){
            if(m[x] > 0)
                m[x]--;
            else
                return false;
        }
        return true;
    }
};