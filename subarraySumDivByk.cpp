    int count =0, prefixSum=0;
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> prefixMap;
        prefixMap[0] = 1; // To handle subarrays that start from the beginning

        for (int num : nums){
            prefixSum += num;
            int mod = prefixSum % k;

            // Adjust negative remainders to be positive
            if (mod < 0) {
                mod += k;
            }

            if (prefixMap.find(mod) != prefixMap.end()){
                count += prefixMap[mod];
                prefixMap[mod] += 1;                
            }else {
                prefixMap[mod] = 1;
            }
        }
        return count;
    }
