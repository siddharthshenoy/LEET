class Solution {
public:
     vector<int> sortByBits(vector<int>& arr){
      multiset <pair<int,int>> num;
      for(int i = 0;i < arr.size();i++){
        int a = 0, b = 1;
        while(b <= arr[i]){
          if(arr[i] & b) a++;
          b = b<<1;
        }
        num.insert({a,arr[i]});
      }
      multiset<pair<int,int>>::iterator it = num.begin();
      for(int i=0; it != num.end();it++,i++) arr[i] = it->second;
      return arr;
    }
};
