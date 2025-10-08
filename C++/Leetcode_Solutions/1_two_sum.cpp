class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        map<int,int> mp;
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int r=t-nums[i];
            if(mp.find(r)!=mp.end() && i!=mp[r]){
                v.push_back(i);
                v.push_back(mp[r]);
                break;

            }
        }
        return v;
        
    }
};
