class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> main;
        vector<int> :: iterator it;
        for(it = nums.begin(); it != nums.end(); it++){
            int ele = *it;
            if(find( main.begin(), main.end(), ele)!= main.end() ){
                nums.erase(it);
                it--;
            }
            else{
                main.push_back(*it);
            }
        }
        return nums.size();
    }
};