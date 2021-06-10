class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        
        vector<int> b;
        vector<vector<int> > res;
        
        int diff = arr[1] - arr[0];
        
        for(int i=2; i<arr.size(); i++)
        {
            diff = min(diff, arr[i]-arr[i-1]);
        }
        for(int i=1; i<arr.size(); i++)
        {
            if((arr[i]-arr[i-1]) == diff)
            {
                b.clear();
                b.push_back(arr[i-1]);
                b.push_back(arr[i]);
                res.push_back(b);
            }
        }
        
        return res;
    }
}
