    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>m;

        for(int i=0; i<n; i++){
            int x=nums[i] ;
            int y=target-x;               // x + y = target
            if(m.find(y)!=m.end()){
                return {i,m[y]} ;
            }
            m[nums[i]]=i ;
        }
        return {-1,-1};
    }
