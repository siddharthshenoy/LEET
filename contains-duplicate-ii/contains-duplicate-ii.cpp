class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> umap;
        for(int i = 0; i<nums.size() ; i++){
            umap[nums[i]].push_back(i);
        }
        for(auto& el:umap){
            if(el.second.size() > 1){
                for(int i = 0 ; i < el.second.size()-1 ; i++){
                    if(el.second[i+1] - el.second[i] <= k){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};