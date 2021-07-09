class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int i=0;
        int j=0;
        int k=m+n;
        for(int i=m;i<m+n;i++){
            a[i]=b[j];
        j++;
    }
    sort(a.begin(),a.end());
    }
};